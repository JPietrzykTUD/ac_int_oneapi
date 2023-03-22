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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/compare/compare_fpga.hpp
 * \date 2023-03-23
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/Own/Work/SimdOperators/tools/tvlgen
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : d49f0be (d49f0be9e67e7795a71c409570fd5ab116e5c718)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : fpga_bitwise
 *   Git-Commit    : 68dbfcf (68dbfcfe0006cbee7177df99bf7c933cb7ca26e4)
 *
 */

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_FPGA_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_FPGA_HPP

#include "../../declarations/compare.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/compare.yaml::329
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<uint8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {

               using T = typename Vec::register_type;
               T result{};
               // Create a value with all bits set to 1, regardless of underlying type
               typename Vec::base_type checker;
               memset((void*)&checker, 0xff, sizeof(checker));

               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = ((vec_data[i] >= vec_min[i]) && (vec_data[i] <= vec_max[i])) ? checker : 0;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/compare.yaml::329
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<int8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {

               using T = typename Vec::register_type;
               T result{};
               // Create a value with all bits set to 1, regardless of underlying type
               typename Vec::base_type checker;
               memset((void*)&checker, 0xff, sizeof(checker));

               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = ((vec_data[i] >= vec_min[i]) && (vec_data[i] <= vec_max[i])) ? checker : 0;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/compare.yaml::329
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<uint16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {

               using T = typename Vec::register_type;
               T result{};
               // Create a value with all bits set to 1, regardless of underlying type
               typename Vec::base_type checker;
               memset((void*)&checker, 0xff, sizeof(checker));

               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = ((vec_data[i] >= vec_min[i]) && (vec_data[i] <= vec_max[i])) ? checker : 0;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/compare.yaml::329
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<int16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {

               using T = typename Vec::register_type;
               T result{};
               // Create a value with all bits set to 1, regardless of underlying type
               typename Vec::base_type checker;
               memset((void*)&checker, 0xff, sizeof(checker));

               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = ((vec_data[i] >= vec_min[i]) && (vec_data[i] <= vec_max[i])) ? checker : 0;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/compare.yaml::329
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {

               using T = typename Vec::register_type;
               T result{};
               // Create a value with all bits set to 1, regardless of underlying type
               typename Vec::base_type checker;
               memset((void*)&checker, 0xff, sizeof(checker));

               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = ((vec_data[i] >= vec_min[i]) && (vec_data[i] <= vec_max[i])) ? checker : 0;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/compare.yaml::329
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {

               using T = typename Vec::register_type;
               T result{};
               // Create a value with all bits set to 1, regardless of underlying type
               typename Vec::base_type checker;
               memset((void*)&checker, 0xff, sizeof(checker));

               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = ((vec_data[i] >= vec_min[i]) && (vec_data[i] <= vec_max[i])) ? checker : 0;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/compare.yaml::329
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<float, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {

               using T = typename Vec::register_type;
               T result{};
               // Create a value with all bits set to 1, regardless of underlying type
               typename Vec::base_type checker;
               memset((void*)&checker, 0xff, sizeof(checker));

               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = ((vec_data[i] >= vec_min[i]) && (vec_data[i] <= vec_max[i])) ? checker : 0;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for fpga using float.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_FPGA_HPP