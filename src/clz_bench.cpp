/*
Copyright 2023 Database Research Group, TU Dresden

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <CL/sycl.hpp>
#include <algorithm>
#include <array>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <random>
#include <sycl/ext/intel/fpga_extensions.hpp>
#include <tuple>
#include <utility>
#include <vector>
#include <cstring>
#include <climits>

// Template Vector Library (TVL) main header 
#include <tvlintrin.hpp>

// Time
#include <sys/time.h>
// Sleep
#include <unistd.h>

#include <data.hpp>
#include <clz.hpp>
#include <utils.hpp>

using namespace sycl;
using namespace std::chrono;


void exception_handler(exception_list exceptions) {
    for (std::exception_ptr const& e : exceptions) {
        try {
            std::rethrow_exception(e);
        } catch (exception const& e) {
            std::cout << "Caught asynchronous SYCL exception:\n"
                      << e.what() << std::endl;
        }
    }
}

namespace details {
    //we create the buffers ONE time for uint64_t, than we cast the pointers within bench accordingly
    template<typename FPGAT>
    void bench(queue* q, uint64_t * in, uint64_t * out_fpga, size_t buffer_count) {
        using T = typename FPGAT::base_type;
        using RetT = typename FPGAT::offset_base_type;
        auto bench_in = reinterpret_cast<T*>(in);
        auto bench_out_fpga = reinterpret_cast<RetT*>(out_fpga);

        double input_size_mib = static_cast<double>(buffer_count * sizeof(T)) / (1024 * 1024);

        volatile double offloading_and_exec_time;
        volatile double execution_time;
        try{ 
            offloading_and_exec_time = clz_fpga_wrapper<FPGAT>(q, bench_out_fpga, bench_in, buffer_count);
            execution_time = clz_fpga_wrapper<FPGAT>(q, bench_out_fpga, bench_in, buffer_count);
        } catch (exception const& e) {
            std::cerr << "Caught a synchronous SYCL exception: " << e.what() << "\n";
            std::terminate();
        }

        std::cout << tvl::type_name<T>() << "\t" << FPGAT::vector_size_b() << "\t" << input_size_mib << "\t" << buffer_count << "\t" << execution_time << "\t" << "us" << "\t" << (input_size_mib / (execution_time * 1e-6) ) << "\t" << "MiB/s" << "\t" << offloading_and_exec_time << "\t" << "us" << std::endl;
    }
}

template<typename T>
void bench(queue* q, uint64_t * in, uint64_t * out_fpga, size_t buffer_size) {
    size_t buffer_count = buffer_size / sizeof(T);
    details::bench<tvl::simd<T, tvl::fpga, 128>>(q, in, out_fpga, buffer_count);
    details::bench<tvl::simd<T, tvl::fpga, 256>>(q, in, out_fpga, buffer_count);
    details::bench<tvl::simd<T, tvl::fpga, 512>>(q, in, out_fpga, buffer_count);
    details::bench<tvl::simd<T, tvl::fpga, 1024>>(q, in, out_fpga, buffer_count);
    details::bench<tvl::simd<T, tvl::fpga, 2048>>(q, in, out_fpga, buffer_count);
}



// main
int main(int argc, char* argv[]) {
    // the device selector
#ifdef FPGA_EMULATOR
    ext::intel::fpga_emulator_selector selector;
#else
    ext::intel::fpga_selector selector;
#endif

    // create the device queue
    auto props = property_list{property::queue::enable_profiling()};
    queue q(selector, exception_handler, props);

    // make sure the device supports USM device allocations
    device d = q.get_device();
    if (!d.get_info<info::device::usm_device_allocations>()) {
        std::cerr << "ERROR: The selected device does not support USM device"
                  << " allocations" << std::endl;
        std::terminate();
    }
    if (!d.get_info<info::device::usm_host_allocations>()) {
        std::cerr << "ERROR: The selected device does not support USM host"
                  << " allocations" << std::endl;
        std::terminate();
    }


    //prepare Data once for uint64_t
    auto [in, out_fpga, buffer_count] = create_buffers<uint64_t>(&q, 1_GiB);

    fill_buffers_random<uint64_t>(in, out_fpga, buffer_count);


    std::cout << "Type\tRegSize\tSize in MiB\tElementCount\tRuntime\tUnit\tThroughput\tUnit\tInitialExecTime\tUnit" << std::endl;
    bench<uint8_t> (&q, in, out_fpga, 1_GiB);
    bench<uint16_t>(&q, in, out_fpga, 1_GiB);
    bench<uint32_t>(&q, in, out_fpga, 1_GiB);
    bench<uint64_t>(&q, in, out_fpga, 1_GiB);
    bench<int8_t>  (&q, in, out_fpga, 1_GiB);
    bench<int16_t> (&q, in, out_fpga, 1_GiB);
    bench<int32_t> (&q, in, out_fpga, 1_GiB);
    bench<int64_t> (&q, in, out_fpga, 1_GiB);
    bench<float>   (&q, in, out_fpga, 1_GiB);
    bench<double>  (&q, in, out_fpga, 1_GiB);

    remove_buffers(&q, in, out_fpga);

    return 0;
}



