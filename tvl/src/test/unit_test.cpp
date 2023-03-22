/*==========================================================================*
 * This file is part of the TVL - a template SIMD library.                  *
 *                                                                          *
 * Copyright 2023 TVL-Team, Database Research Group TU Dresden              *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *     http://www.apache.org/licenses/LICENSE-2.0                           *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 *==========================================================================*/
/*
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/src/test/unit_test.cpp
 * \date 2023-03-23
 * \brief Unit test file for TVL Primitives using Catch2
 * \note
 *
 */
#include <tvlintrin.hpp>
#include <cstddef>
#include <algorithm>
#include <limits>
#include <cstring>
#include <array>
#include "test_functions.hpp"
   #define CATCH_CONFIG_MAIN
#include "catch.hpp"

namespace tvl {
  template<VectorProcessingStyle Vec>
     bool test_set1_default() {
        using namespace tvl;
        std::size_t element_count = 1024;
        bool allOk = true;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        const std::size_t limit = std::min((std::size_t) 4096, (std::size_t) std::numeric_limits<typename Vec::base_type>::max());
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < limit; ++i) {
           auto vec = set1<Vec>(i);
           for(std::size_t j = 0; j < Vec::vector_element_count(); j++) {
              reference_result_ptr[j] = i;
           }
           allOk &= test_helper.validate_simd_register(vec);
        }
        const auto maxval = std::numeric_limits<typename Vec::base_type>::max();
        auto max_vec = set1<Vec>(maxval);
        for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
           reference_result_ptr[i] = maxval;
        }
        allOk &= test_helper.validate_simd_register(max_vec);
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_hadd_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
        testing::test_memory_helper_t<Vec> test_helper{1, false};
        bool allOk = true;
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        const std::size_t limit = std::min( (size_t) 4096, (size_t) std::numeric_limits<T>::max() / Vec::vector_element_count() );
        for(std::size_t i = 0; i < limit; ++i) {
           *reference_result_ptr =  Vec::vector_element_count() * i;
           auto vec = set1<Vec>(i);
           *test_result_ptr = hadd<Vec>(vec);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_store_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), true};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = i;
           }
           auto loaded = set1<Vec>(i);
           store<Vec>(test_result_ptr, loaded);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_storeu_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = i;
           }
           auto loaded = set1<Vec>(i);
           storeu<Vec>(test_result_ptr, loaded);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_load_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), true};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
           }
           auto loaded = load<Vec>(&test_data_ptr[i]);
           storeu<Vec>(test_result_ptr, loaded);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_loadu_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); ++i) {
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
           }
           auto loaded = loadu<Vec>(&test_data_ptr[i]);
           storeu<Vec>(test_result_ptr, loaded);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_set_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
           }
           auto loaded = testing::set_call_helper_t<Vec>::call_set(&test_data_ptr[i]);
           storeu<Vec>(test_result_ptr, loaded);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_binary_and_and_as_compare() {
        using namespace tvl;
        //a & a == a ?
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           std::size_t tester_idx = 0;
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j];
           }
           auto vec1 = loadu<Vec>( &test_data_ptr[i] );
           auto vec2 = loadu<Vec>( &test_data_ptr[i] );
           auto result = binary_and<Vec>( vec1, vec2 );
           storeu<Vec>( test_result_ptr, result );
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_binary_xor_xor_as_compare() {
        using namespace tvl;
        //a ^ a == 0 ?
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           std::size_t tester_idx = 0;
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[tester_idx++] = 0;
           }
           auto vec1 = loadu<Vec>(&test_data_ptr[i]);
           auto vec2 = loadu<Vec>(&test_data_ptr[i]);
           auto result = binary_xor<Vec>(vec1, vec2);
           storeu<Vec>(test_result_ptr, result);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_add_running_sum_w_epsilon() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        auto vec = set1<Vec>( 0 );
        for(std::size_t i = 0; i < element_count - 2*Vec::vector_element_count(); i+=2*Vec::vector_element_count()) {
           std::size_t tester_idx = 0;
           for(size_t j = i; j < i + Vec::vector_element_count(); j++) {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j]+reference_data_ptr[j+Vec::vector_element_count()];
           }
           auto elements_vec1 = loadu<Vec>(&test_data_ptr[i]);
           auto elements_vec2 = loadu<Vec>(&test_data_ptr[i+Vec::vector_element_count()]);
           vec = add<Vec>(elements_vec1, elements_vec2);
           storeu<Vec>( test_result_ptr, vec );
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_add_zero_cornercase() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           std::size_t tester_idx = 0;
           for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j];
           }
           auto vec = set1<Vec>( 0 );
           auto elements = loadu<Vec>(&test_data_ptr[i]);
           vec = add<Vec>(vec, elements);
           storeu<Vec>( test_result_ptr, vec );
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
              return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_mul_default() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - (2*Vec::vector_element_count()); i+=(2*Vec::vector_element_count())) {
           std::size_t j = i;
           for(; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
           }
           for(; j < i + (2*Vec::vector_element_count()); ++j) {
              reference_result_ptr[j-(i+Vec::vector_element_count())] *= reference_data_ptr[j];
           }
           auto vec_a = loadu<Vec>(&test_data_ptr[i]);
           auto vec_b = loadu<Vec>(&test_data_ptr[i+Vec::vector_element_count()]);
           auto vec_result = mul<Vec>(vec_a, vec_b);
           storeu<Vec>(test_result_ptr, vec_result);
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_to_integral_mask_match_zero_to_vec_count() {
        using namespace tvl;
        using T = typename Vec::base_type;
        bool allOk = true;
        // For Vec::mask_type == Vec::register_type testing
        std::array< T, Vec::vector_element_count() > pseudo_mask;
        typename Vec::mask_type vec_mask;
        for(std::size_t i = 0; i < Vec::vector_element_count() + 1; i++) {
           // To check if we are at AVX512/Scalar or any register type mask
           if constexpr (std::is_same_v<bool, typename Vec::mask_type>) {
              // e.g. Scalar (bool)
              vec_mask = false;
              for ( std::size_t j = 0; j < i; ++j ) {
                 vec_mask = (vec_mask << 1) | 0b1;
              }
           } else if constexpr (std::is_same_v<typename Vec::mask_type, typename Vec::imask_type>) {
              // // e.g. AVX512
              vec_mask = 0;
              typename Vec::mask_type one = 0b1;
              for ( std::size_t j = 0; j < i; ++j ) {
                 vec_mask |= one << j;
              }
           } else {
              // e.g. SSE, AVX2
              pseudo_mask.fill( 0 );
              T val = -1;
              for ( std::size_t j = 0; j < i; ++j ) {
                 pseudo_mask[ j ] = val;
              }
              vec_mask = loadu<Vec>( pseudo_mask.data() );
           }
           auto mask_integral = to_integral<Vec>( vec_mask );
           std::size_t matches = 0;
           for ( std::size_t k = 0; k < Vec::vector_element_count(); ++k ) {
             if(((mask_integral >> k) & 0b1) == 1 ) {
               ++matches;
             }
           }
           allOk &= (matches == i);
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_equal_all_equal() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, 1, false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           reference_result_ptr[0] = Vec::vector_element_count();
           auto vec1 = loadu<Vec>( &test_data_ptr[i] );
           auto vec2 = loadu<Vec>( &test_data_ptr[i] );
           auto result_mask = equal<Vec>( vec1, vec2 );
           auto result_integral = to_integral<Vec>( result_mask );
           size_t matches = 0;
           for ( size_t i = 0; i < Vec::vector_element_count(); ++i ) {
             if(((result_integral >> i) & 0b1) == 1 ) {
               matches += 1;
             }
           }
           test_result_ptr[0] = matches;
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
  template<VectorProcessingStyle Vec>
     bool test_equal_none_equal() {
        using namespace tvl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, 1, false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        auto vec1 = set1<Vec>( -1 );
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
           reference_result_ptr[0] = 0;
           auto vec2 = loadu<Vec>( &test_data_ptr[i] );
           auto result_mask = equal<Vec>( vec1, vec2 );
           auto result_integral = to_integral<Vec>( result_mask );
           size_t matches = 0;
           for ( size_t i = 0; i < Vec::vector_element_count(); ++i ) {
             if(((result_integral >> i) & 0b1) == 1 ) {
               matches += 1;
             }
           }
           test_result_ptr[0] = matches;
           test_helper.synchronize();
           allOk &= test_helper.validate();
        }
        return allOk;

     }
}

TEST_CASE("Testing primitive 'set1' for fpga", "[set1],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set1_default<simd<double, fpga>>());

      CHECK(test_set1_default<simd<float, fpga>>());

      CHECK(test_set1_default<simd<int16_t, fpga>>());

      CHECK(test_set1_default<simd<int32_t, fpga>>());

      CHECK(test_set1_default<simd<int64_t, fpga>>());

      CHECK(test_set1_default<simd<int8_t, fpga>>());

      CHECK(test_set1_default<simd<uint16_t, fpga>>());

      CHECK(test_set1_default<simd<uint32_t, fpga>>());

      CHECK(test_set1_default<simd<uint64_t, fpga>>());

      CHECK(test_set1_default<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'set1' for scalar", "[set1],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set1_default<simd<double, scalar>>());

      CHECK(test_set1_default<simd<float, scalar>>());

      CHECK(test_set1_default<simd<int16_t, scalar>>());

      CHECK(test_set1_default<simd<int32_t, scalar>>());

      CHECK(test_set1_default<simd<int64_t, scalar>>());

      CHECK(test_set1_default<simd<int8_t, scalar>>());

      CHECK(test_set1_default<simd<uint16_t, scalar>>());

      CHECK(test_set1_default<simd<uint32_t, scalar>>());

      CHECK(test_set1_default<simd<uint64_t, scalar>>());

      CHECK(test_set1_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'hadd' for fpga", "[hadd],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_hadd_default<simd<double, fpga>>());

      CHECK(test_hadd_default<simd<float, fpga>>());

      CHECK(test_hadd_default<simd<int16_t, fpga>>());

      CHECK(test_hadd_default<simd<int32_t, fpga>>());

      CHECK(test_hadd_default<simd<int64_t, fpga>>());

      CHECK(test_hadd_default<simd<int8_t, fpga>>());

      CHECK(test_hadd_default<simd<uint16_t, fpga>>());

      CHECK(test_hadd_default<simd<uint32_t, fpga>>());

      CHECK(test_hadd_default<simd<uint64_t, fpga>>());

      CHECK(test_hadd_default<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'hadd' for scalar", "[hadd],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_hadd_default<simd<double, scalar>>());

      CHECK(test_hadd_default<simd<float, scalar>>());

      CHECK(test_hadd_default<simd<int16_t, scalar>>());

      CHECK(test_hadd_default<simd<int32_t, scalar>>());

      CHECK(test_hadd_default<simd<int64_t, scalar>>());

      CHECK(test_hadd_default<simd<int8_t, scalar>>());

      CHECK(test_hadd_default<simd<uint16_t, scalar>>());

      CHECK(test_hadd_default<simd<uint32_t, scalar>>());

      CHECK(test_hadd_default<simd<uint64_t, scalar>>());

      CHECK(test_hadd_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'store' for fpga", "[store],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_store_default<simd<double, fpga>>());

      CHECK(test_store_default<simd<float, fpga>>());

      CHECK(test_store_default<simd<int16_t, fpga>>());

      CHECK(test_store_default<simd<int32_t, fpga>>());

      CHECK(test_store_default<simd<int64_t, fpga>>());

      CHECK(test_store_default<simd<int8_t, fpga>>());

      CHECK(test_store_default<simd<uint16_t, fpga>>());

      CHECK(test_store_default<simd<uint32_t, fpga>>());

      CHECK(test_store_default<simd<uint64_t, fpga>>());

      CHECK(test_store_default<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'store' for scalar", "[store],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_store_default<simd<double, scalar>>());

      CHECK(test_store_default<simd<float, scalar>>());

      CHECK(test_store_default<simd<int16_t, scalar>>());

      CHECK(test_store_default<simd<int32_t, scalar>>());

      CHECK(test_store_default<simd<int64_t, scalar>>());

      CHECK(test_store_default<simd<int8_t, scalar>>());

      CHECK(test_store_default<simd<uint16_t, scalar>>());

      CHECK(test_store_default<simd<uint32_t, scalar>>());

      CHECK(test_store_default<simd<uint64_t, scalar>>());

      CHECK(test_store_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'storeu' for fpga", "[storeu],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_storeu_default<simd<double, fpga>>());

      CHECK(test_storeu_default<simd<float, fpga>>());

      CHECK(test_storeu_default<simd<int16_t, fpga>>());

      CHECK(test_storeu_default<simd<int32_t, fpga>>());

      CHECK(test_storeu_default<simd<int64_t, fpga>>());

      CHECK(test_storeu_default<simd<int8_t, fpga>>());

      CHECK(test_storeu_default<simd<uint16_t, fpga>>());

      CHECK(test_storeu_default<simd<uint32_t, fpga>>());

      CHECK(test_storeu_default<simd<uint64_t, fpga>>());

      CHECK(test_storeu_default<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'storeu' for scalar", "[storeu],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_storeu_default<simd<double, scalar>>());

      CHECK(test_storeu_default<simd<float, scalar>>());

      CHECK(test_storeu_default<simd<int16_t, scalar>>());

      CHECK(test_storeu_default<simd<int32_t, scalar>>());

      CHECK(test_storeu_default<simd<int64_t, scalar>>());

      CHECK(test_storeu_default<simd<int8_t, scalar>>());

      CHECK(test_storeu_default<simd<uint16_t, scalar>>());

      CHECK(test_storeu_default<simd<uint32_t, scalar>>());

      CHECK(test_storeu_default<simd<uint64_t, scalar>>());

      CHECK(test_storeu_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'load' for fpga", "[load],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_load_default<simd<double, fpga>>());

      CHECK(test_load_default<simd<float, fpga>>());

      CHECK(test_load_default<simd<int16_t, fpga>>());

      CHECK(test_load_default<simd<int32_t, fpga>>());

      CHECK(test_load_default<simd<int64_t, fpga>>());

      CHECK(test_load_default<simd<int8_t, fpga>>());

      CHECK(test_load_default<simd<uint16_t, fpga>>());

      CHECK(test_load_default<simd<uint32_t, fpga>>());

      CHECK(test_load_default<simd<uint64_t, fpga>>());

      CHECK(test_load_default<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'load' for scalar", "[load],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_load_default<simd<double, scalar>>());

      CHECK(test_load_default<simd<float, scalar>>());

      CHECK(test_load_default<simd<int16_t, scalar>>());

      CHECK(test_load_default<simd<int32_t, scalar>>());

      CHECK(test_load_default<simd<int64_t, scalar>>());

      CHECK(test_load_default<simd<int8_t, scalar>>());

      CHECK(test_load_default<simd<uint16_t, scalar>>());

      CHECK(test_load_default<simd<uint32_t, scalar>>());

      CHECK(test_load_default<simd<uint64_t, scalar>>());

      CHECK(test_load_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'loadu' for fpga", "[loadu],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_loadu_default<simd<double, fpga>>());

      CHECK(test_loadu_default<simd<float, fpga>>());

      CHECK(test_loadu_default<simd<int16_t, fpga>>());

      CHECK(test_loadu_default<simd<int32_t, fpga>>());

      CHECK(test_loadu_default<simd<int64_t, fpga>>());

      CHECK(test_loadu_default<simd<int8_t, fpga>>());

      CHECK(test_loadu_default<simd<uint16_t, fpga>>());

      CHECK(test_loadu_default<simd<uint32_t, fpga>>());

      CHECK(test_loadu_default<simd<uint64_t, fpga>>());

      CHECK(test_loadu_default<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'loadu' for scalar", "[loadu],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_loadu_default<simd<double, scalar>>());

      CHECK(test_loadu_default<simd<float, scalar>>());

      CHECK(test_loadu_default<simd<int16_t, scalar>>());

      CHECK(test_loadu_default<simd<int32_t, scalar>>());

      CHECK(test_loadu_default<simd<int64_t, scalar>>());

      CHECK(test_loadu_default<simd<int8_t, scalar>>());

      CHECK(test_loadu_default<simd<uint16_t, scalar>>());

      CHECK(test_loadu_default<simd<uint32_t, scalar>>());

      CHECK(test_loadu_default<simd<uint64_t, scalar>>());

      CHECK(test_loadu_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'set' for fpga", "[set],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive set not implemented for fpga");
   }
}
TEST_CASE("Testing primitive 'set' for scalar", "[set],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_set_default<simd<double, scalar>>());

      CHECK(test_set_default<simd<float, scalar>>());

      CHECK(test_set_default<simd<int16_t, scalar>>());

      CHECK(test_set_default<simd<int32_t, scalar>>());

      CHECK(test_set_default<simd<int64_t, scalar>>());

      CHECK(test_set_default<simd<int8_t, scalar>>());

      CHECK(test_set_default<simd<uint16_t, scalar>>());

      CHECK(test_set_default<simd<uint32_t, scalar>>());

      CHECK(test_set_default<simd<uint64_t, scalar>>());

      CHECK(test_set_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'binary_and' for fpga", "[binary_and],[fpga]") {
   using namespace tvl;
   SECTION("and_as_compare") {
      WARN("Primitive binary_and<simd<double, fpga>> not implemented.");
      WARN("Primitive binary_and<simd<float, fpga>> not implemented.");
      CHECK(test_binary_and_and_as_compare<simd<int16_t, fpga>>());

      CHECK(test_binary_and_and_as_compare<simd<int32_t, fpga>>());

      WARN("Primitive binary_and<simd<int64_t, fpga>> not implemented.");
      CHECK(test_binary_and_and_as_compare<simd<int8_t, fpga>>());

      CHECK(test_binary_and_and_as_compare<simd<uint16_t, fpga>>());

      CHECK(test_binary_and_and_as_compare<simd<uint32_t, fpga>>());

      WARN("Primitive binary_and<simd<uint64_t, fpga>> not implemented.");
      CHECK(test_binary_and_and_as_compare<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'binary_and' for scalar", "[binary_and],[scalar]") {
   using namespace tvl;
   SECTION("and_as_compare") {
      CHECK(test_binary_and_and_as_compare<simd<double, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<float, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<int16_t, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<int32_t, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<int64_t, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<int8_t, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<uint16_t, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<uint32_t, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<uint64_t, scalar>>());

      CHECK(test_binary_and_and_as_compare<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'binary_xor' for fpga", "[binary_xor],[fpga]") {
   using namespace tvl;
   SECTION("xor_as_compare") {
      WARN("Primitive binary_xor not implemented for fpga");
   }
}
TEST_CASE("Testing primitive 'binary_xor' for scalar", "[binary_xor],[scalar]") {
   using namespace tvl;
   SECTION("xor_as_compare") {
      CHECK(test_binary_xor_xor_as_compare<simd<double, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<float, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<int16_t, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<int32_t, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<int64_t, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<int8_t, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<uint16_t, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<uint32_t, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<uint64_t, scalar>>());

      CHECK(test_binary_xor_xor_as_compare<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'add' for fpga", "[add],[fpga]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      CHECK(test_add_running_sum_w_epsilon<simd<double, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<float, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int16_t, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int32_t, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int64_t, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int8_t, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint16_t, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint32_t, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint64_t, fpga>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint8_t, fpga>>());

   }
   SECTION("zero_cornercase") {
      CHECK(test_add_zero_cornercase<simd<double, fpga>>());

      CHECK(test_add_zero_cornercase<simd<float, fpga>>());

      CHECK(test_add_zero_cornercase<simd<int16_t, fpga>>());

      CHECK(test_add_zero_cornercase<simd<int32_t, fpga>>());

      CHECK(test_add_zero_cornercase<simd<int64_t, fpga>>());

      CHECK(test_add_zero_cornercase<simd<int8_t, fpga>>());

      CHECK(test_add_zero_cornercase<simd<uint16_t, fpga>>());

      CHECK(test_add_zero_cornercase<simd<uint32_t, fpga>>());

      CHECK(test_add_zero_cornercase<simd<uint64_t, fpga>>());

      CHECK(test_add_zero_cornercase<simd<uint8_t, fpga>>());

   }
}
TEST_CASE("Testing primitive 'add' for scalar", "[add],[scalar]") {
   using namespace tvl;
   SECTION("running_sum_w_epsilon") {
      CHECK(test_add_running_sum_w_epsilon<simd<double, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<float, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int16_t, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int32_t, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int64_t, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<int8_t, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint16_t, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint32_t, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint64_t, scalar>>());

      CHECK(test_add_running_sum_w_epsilon<simd<uint8_t, scalar>>());

   }
   SECTION("zero_cornercase") {
      CHECK(test_add_zero_cornercase<simd<double, scalar>>());

      CHECK(test_add_zero_cornercase<simd<float, scalar>>());

      CHECK(test_add_zero_cornercase<simd<int16_t, scalar>>());

      CHECK(test_add_zero_cornercase<simd<int32_t, scalar>>());

      CHECK(test_add_zero_cornercase<simd<int64_t, scalar>>());

      CHECK(test_add_zero_cornercase<simd<int8_t, scalar>>());

      CHECK(test_add_zero_cornercase<simd<uint16_t, scalar>>());

      CHECK(test_add_zero_cornercase<simd<uint32_t, scalar>>());

      CHECK(test_add_zero_cornercase<simd<uint64_t, scalar>>());

      CHECK(test_add_zero_cornercase<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'mul' for fpga", "[mul],[fpga]") {
   using namespace tvl;
   SECTION("default") {
      WARN("Primitive mul not implemented for fpga");
   }
}
TEST_CASE("Testing primitive 'mul' for scalar", "[mul],[scalar]") {
   using namespace tvl;
   SECTION("default") {
      CHECK(test_mul_default<simd<double, scalar>>());

      CHECK(test_mul_default<simd<float, scalar>>());

      CHECK(test_mul_default<simd<int16_t, scalar>>());

      CHECK(test_mul_default<simd<int32_t, scalar>>());

      CHECK(test_mul_default<simd<int64_t, scalar>>());

      CHECK(test_mul_default<simd<int8_t, scalar>>());

      CHECK(test_mul_default<simd<uint16_t, scalar>>());

      CHECK(test_mul_default<simd<uint32_t, scalar>>());

      CHECK(test_mul_default<simd<uint64_t, scalar>>());

      CHECK(test_mul_default<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'to_integral' for fpga", "[to_integral],[fpga]") {
   using namespace tvl;
   SECTION("mask_match_zero_to_vec_count") {
      WARN("Primitive to_integral not implemented for fpga");
   }
}
TEST_CASE("Testing primitive 'to_integral' for scalar", "[to_integral],[scalar]") {
   using namespace tvl;
   SECTION("mask_match_zero_to_vec_count") {
      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<double, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<float, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int16_t, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int32_t, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int64_t, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int8_t, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint16_t, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint32_t, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint64_t, scalar>>());

      CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint8_t, scalar>>());

   }
}
TEST_CASE("Testing primitive 'equal' for fpga", "[equal],[fpga]") {
   using namespace tvl;
   SECTION("all_equal") {
   }
   SECTION("none_equal") {
   }
}
TEST_CASE("Testing primitive 'equal' for scalar", "[equal],[scalar]") {
   using namespace tvl;
   SECTION("all_equal") {
      CHECK(test_equal_all_equal<simd<double, scalar>>());

      CHECK(test_equal_all_equal<simd<float, scalar>>());

      CHECK(test_equal_all_equal<simd<int16_t, scalar>>());

      CHECK(test_equal_all_equal<simd<int32_t, scalar>>());

      CHECK(test_equal_all_equal<simd<int64_t, scalar>>());

      CHECK(test_equal_all_equal<simd<int8_t, scalar>>());

      CHECK(test_equal_all_equal<simd<uint16_t, scalar>>());

      CHECK(test_equal_all_equal<simd<uint32_t, scalar>>());

      CHECK(test_equal_all_equal<simd<uint64_t, scalar>>());

      CHECK(test_equal_all_equal<simd<uint8_t, scalar>>());

   }
   SECTION("none_equal") {
      CHECK(test_equal_none_equal<simd<double, scalar>>());

      CHECK(test_equal_none_equal<simd<float, scalar>>());

      CHECK(test_equal_none_equal<simd<int16_t, scalar>>());

      CHECK(test_equal_none_equal<simd<int32_t, scalar>>());

      CHECK(test_equal_none_equal<simd<int64_t, scalar>>());

      CHECK(test_equal_none_equal<simd<int8_t, scalar>>());

      CHECK(test_equal_none_equal<simd<uint16_t, scalar>>());

      CHECK(test_equal_none_equal<simd<uint32_t, scalar>>());

      CHECK(test_equal_none_equal<simd<uint64_t, scalar>>());

      CHECK(test_equal_none_equal<simd<uint8_t, scalar>>());

   }
}

