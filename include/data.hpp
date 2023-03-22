#ifndef DATA_HPP
#define DATA_HPP

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

template<typename T, typename RetT = typename std::conditional_t<(sizeof(T)<4), std::make_unsigned_t<T>, std::conditional_t<(sizeof(T)==4), uint32_t, uint64_t>>>
void fill_buffers_systematic(T* in, RetT* out_fpga, RetT* out_cpu, size_t buffer_count) {
    auto casted_in = reinterpret_cast<RetT*>(in);
    casted_in[0] = 0;
    {
        std::size_t i = 0;
        using namespace tvl;
        for(; i < (sizeof(T)*CHAR_BIT); ++i) {
            casted_in[i+1] = (RetT)1<<i;
        }
        std::mt19937 engine(0xc01dbadc00ffee);
        std::uniform_int_distribution<RetT> dist(0, std::numeric_limits<RetT>::max());
        for(; i < buffer_count; ++i) {
            casted_in[i] = dist(engine);
        }
    }
    for(std::size_t i = 0; i < buffer_count; ++i) {
        out_fpga[i] = 0x80;
        out_cpu[i] = 0x80;  //use 128 to check whether the index was overwritten, since 128 can not be a result of clz.
    }
}
template<typename T, typename RetT = typename std::conditional_t<(sizeof(T)<4), std::make_unsigned_t<T>, std::conditional_t<(sizeof(T)==4), uint32_t, uint64_t>>>
void fill_buffers_random(T* in, RetT* out_fpga, RetT* out_cpu, size_t buffer_count) {
    auto casted_in = reinterpret_cast<RetT*>(in);
    std::mt19937 engine(0xc01dbadc00ffee);
    std::uniform_int_distribution<RetT> dist(0, std::numeric_limits<RetT>::max());
    for(size_t i = 0; i < buffer_count; ++i) {
        casted_in[i] = dist(engine);
        out_fpga[i] = 0x80;
        out_cpu[i] = 0x80;
    }
}
template<typename T, typename RetT = typename std::conditional_t<(sizeof(T)<4), std::make_unsigned_t<T>, std::conditional_t<(sizeof(T)==4), uint32_t, uint64_t>>>
void fill_buffers_random(T* in, RetT* out_fpga, size_t buffer_count) {
    auto casted_in = reinterpret_cast<RetT*>(in);
    std::mt19937 engine(0xc01dbadc00ffee);
    std::uniform_int_distribution<RetT> dist(0, std::numeric_limits<RetT>::max());
    for(size_t i = 0; i < buffer_count; ++i) {
        casted_in[i] = dist(engine);
        out_fpga[i] = 0x80;
    }
}

template<typename T>
auto create_buffers_with_host(queue* q, size_t buffer_size = 0) {
    using FPGAT = tvl::simd<T, tvl::fpga, 128>;
    using RetT = typename FPGAT::offset_base_type;
    T* in;
    RetT* out_fpga;
    RetT* out_cpu;
    size_t buffer_count;
    if(buffer_size == 0) {
        buffer_count = (sizeof(T)*CHAR_BIT);
        if(buffer_count < FPGAT::vector_element_count()) {
            buffer_count = FPGAT::vector_element_count(); //Now we have at least as many elements within our buffers as fit into 2 single vectors 
        }
        buffer_count <<= 1; //As we start our test with 0 we want to test 1 element more than the number of digits.
    } else {
        buffer_count = buffer_size / sizeof(T);
    }
    
    // Allocate input/output data in pinned host memory / USM
    if ((in = malloc_host<T>(buffer_count, *q)) == nullptr) {
        std::cerr << "ERROR: could not allocate space for 'in'" << std::endl;
        std::terminate();
    }
    if ((out_fpga = malloc_host<RetT>(buffer_count, *q)) == nullptr) {
        std::cerr << "ERROR: could not allocate space for 'out_fpga'" << std::endl;
        std::terminate();
    }
    if ((out_cpu = malloc_host<RetT>(buffer_count, *q)) == nullptr) {
        std::cerr << "ERROR: could not allocate space for 'out_cpu'" << std::endl;
        std::terminate();
    }
    return std::make_tuple(in, out_fpga, out_cpu, buffer_count);
}
template<typename T>
auto create_buffers(queue* q, size_t buffer_size = 0) {
    using FPGAT = tvl::simd<T, tvl::fpga, 128>;
    using RetT = typename FPGAT::offset_base_type;
    T* in;
    RetT* out_fpga;
    size_t buffer_count;
    if(buffer_size == 0) {
        buffer_count = (sizeof(T)*CHAR_BIT);
        if(buffer_count < FPGAT::vector_element_count()) {
            buffer_count = FPGAT::vector_element_count(); //Now we have at least as many elements within our buffers as fit into 2 single vectors 
        }
        buffer_count <<= 1; //As we start our test with 0 we want to test 1 element more than the number of digits.
    } else {
        buffer_count = buffer_size / sizeof(T);
    }
    
    // Allocate input/output data in pinned host memory / USM
    if ((in = malloc_host<T>(buffer_count, *q)) == nullptr) {
        std::cerr << "ERROR: could not allocate space for 'in'" << std::endl;
        std::terminate();
    }
    if ((out_fpga = malloc_host<RetT>(buffer_count, *q)) == nullptr) {
        std::cerr << "ERROR: could not allocate space for 'out_fpga'" << std::endl;
        std::terminate();
    }
    return std::make_tuple(in, out_fpga, buffer_count);
}

template<typename T, typename RetT>
void remove_buffers(queue* q, T* in, RetT * out_fpga, RetT * out_cpu) {
    sycl::free(out_cpu, *q);
    sycl::free(out_fpga, *q);
    sycl::free(in, *q);
}

template<typename T, typename RetT>
void remove_buffers(queue* q, T* in, RetT * out_fpga) {
    sycl::free(out_fpga, *q);
    sycl::free(in, *q);
}

#endif