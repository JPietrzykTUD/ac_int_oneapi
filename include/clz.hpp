#ifndef CLZ_HPP
#define CLZ_HPP

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

using namespace sycl;
using namespace std::chrono;


template<typename SIMDT, typename InPtrT, typename OutPtrT>
void count_leading_zeros(
    OutPtrT out_ptr, InPtrT data_ptr, size_t element_count
) {
    using namespace tvl;
    for(size_t i = 0; i < element_count; i += SIMDT::vector_element_count(), out_ptr += SIMDT::vector_element_count()) {
        const auto data_vec = loadu<SIMDT>(&data_ptr[i]);
        const auto clz_vec = clz<SIMDT>(data_vec);
        storeu<typename SIMDT::template transform_extension<typename SIMDT::offset_base_type>>(out_ptr, clz_vec);
    }
}

namespace details {
    template<typename T, typename RetT = typename std::conditional_t<(sizeof(T)==4), uint32_t, uint64_t>>
    void host_clz_reference_integral(
        RetT * __restrict__ out_ptr, T const * __restrict__ data_ptr, size_t element_count
    ) {

        for(size_t i = 0; i < element_count; ++i) {
            auto data = *data_ptr++;
            T count = 0;
            //as I am not sure, whether we have access to something like __builtin_clz or std::countl_zero (c++20) we do it the naiive way (since we are interested in validity instead of performance in the moment).
            for(std::size_t pos = 0; pos < (sizeof(T)*CHAR_BIT); ++pos) {
                if(((data >> (((sizeof(T)*CHAR_BIT)-1)-pos))&1) == 1) {
                    break;
                }
                ++count;
            }
            *out_ptr++ = count;
        }	
    }
}


template<typename T, typename RetT = typename std::conditional_t<(sizeof(T)==4), uint32_t, uint64_t>>
void host_clz_reference(
    RetT * __restrict__ out_ptr, T const * __restrict__ data_ptr, size_t element_count
) {
    if constexpr(std::is_integral_v<T>) {
        details::host_clz_reference_integral<T>(out_ptr, data_ptr, element_count);
    } else {
        details::host_clz_reference_integral<RetT>(out_ptr, reinterpret_cast<RetT const *>(data_ptr), element_count);
    }
}

//class count_leading_zeros_tvl;
template<typename SIMDT, typename RetT = typename SIMDT::offset_base_type>
double clz_fpga_wrapper(
    queue* q, 
    RetT * __restrict__ out_ptr, typename SIMDT::base_type const * __restrict__ data_ptr_host, size_t element_count
) {
    using namespace tvl;
    using base_t = typename SIMDT::base_type;

    auto start = high_resolution_clock::now();
        q->submit([&](handler& h) {
            h.single_task([=]() [[intel::kernel_args_restrict]] {
                host_ptr<const base_t> in(data_ptr_host);
                host_ptr<RetT> out(out_ptr);
                count_leading_zeros<SIMDT>(out, in, element_count);
            });
        }).wait();
    auto end = high_resolution_clock::now();
    return static_cast<double>(std::chrono::duration_cast<std::chrono::microseconds>(end - start).count());
}

#endif