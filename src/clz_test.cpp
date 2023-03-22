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

template<typename T>
void test(queue* q) {
    using FPGAT = tvl::simd<T, tvl::fpga, 128>;
    using RetT = typename FPGAT::offset_base_type;
    std::cout << "Testing for " << tvl::type_name<T>() << std::endl;
    auto [in, out_fpga, out_cpu, buffer_count] = create_buffers_with_host<T>(q);
    fill_buffers_systematic<T>(in, out_fpga, out_cpu, buffer_count);
    host_clz_reference<T>(out_cpu, in, buffer_count);
    try{ 
        clz_fpga_wrapper<FPGAT>(q, out_fpga, in, buffer_count);
    } catch (exception const& e) {
        std::cerr << "Caught a synchronous SYCL exception: " << e.what() << "\n";
        std::terminate();
    }

    if(std::memcmp(reinterpret_cast<void const*>(out_cpu), reinterpret_cast<void const *>(out_fpga), buffer_count * sizeof(T)) != 0) {
        std::cout << "\tERROR: Results not equal" << std::endl;
        std::cout << "\t\t" << std::setw(4) << "Pos" << "|" << std::setw((sizeof(T)*CHAR_BIT)) << "Data" << "|" << std::setw(5) << "CPU" << "|" << std::setw(5) << "FPGA" << std::endl;
        for(auto i = 0; i < buffer_count; ++i) {
            std::cout << "\t\t" << std::setw(4) << i << "|" << std::bitset<(sizeof(T)*CHAR_BIT)>{(uint64_t)*reinterpret_cast<RetT*>(&in[i])} << "|" << std::setw(5) << (int)out_cpu[i] << "|" << std::setw(5) << (int)out_fpga[i] << std::endl;
        }
    } else {
        std::cout << "\tFINE." << std::endl;
    }
    remove_buffers<T, RetT>(q, in, out_fpga, out_cpu);
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

    
    test<uint8_t>(&q);   
    test<uint16_t>(&q);
    test<uint32_t>(&q);
    test<uint64_t>(&q);
    test<int8_t>(&q);   
    test<int16_t>(&q);
    test<int32_t>(&q);
    test<int64_t>(&q);
    test<float>(&q);
    test<double>(&q);

    return 0;
}



