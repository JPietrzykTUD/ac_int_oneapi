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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/calc/calc_fpga.hpp
 * \date 2023-03-23
 * \brief This file contains arithmetic primitives.
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_FPGA_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_FPGA_HPP

#include "../../declarations/calc.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<float, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<uint64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint64_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<int64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int64_t, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "add" (primitive add).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::126
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct add<simd<double, fpga, VectorSize>, Idof> {
            using Vec = simd<double, fpga, VectorSize>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               using T = typename Vec::register_type;
               T result; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = vec_a[i] + vec_b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of add for fpga using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::386
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               typename Vec::register_type result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) { result[i] = value[i]; }
               #pragma unroll cilog2(Vec::vector_element_count())
               for(size_t current_width = (Vec::vector_element_count()>>1); current_width >= 1; current_width>>=1) {
                   for(size_t i = 0; i < current_width; ++i) {
                       result[i] = result[(i<<1)] + result[(i<<1)+1];
                   }
               }
               return result[0];
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::386
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               typename Vec::register_type result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) { result[i] = value[i]; }
               #pragma unroll cilog2(Vec::vector_element_count())
               for(size_t current_width = (Vec::vector_element_count()>>1); current_width >= 1; current_width>>=1) {
                   for(size_t i = 0; i < current_width; ++i) {
                       result[i] = result[(i<<1)] + result[(i<<1)+1];
                   }
               }
               return result[0];
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::386
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               typename Vec::register_type result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) { result[i] = value[i]; }
               #pragma unroll cilog2(Vec::vector_element_count())
               for(size_t current_width = (Vec::vector_element_count()>>1); current_width >= 1; current_width>>=1) {
                   for(size_t i = 0; i < current_width; ++i) {
                       result[i] = result[(i<<1)] + result[(i<<1)+1];
                   }
               }
               return result[0];
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::386
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               typename Vec::register_type result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) { result[i] = value[i]; }
               #pragma unroll cilog2(Vec::vector_element_count())
               for(size_t current_width = (Vec::vector_element_count()>>1); current_width >= 1; current_width>>=1) {
                   for(size_t i = 0; i < current_width; ++i) {
                       result[i] = result[(i<<1)] + result[(i<<1)+1];
                   }
               }
               return result[0];
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::386
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               typename Vec::register_type result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) { result[i] = value[i]; }
               #pragma unroll cilog2(Vec::vector_element_count())
               for(size_t current_width = (Vec::vector_element_count()>>1); current_width >= 1; current_width>>=1) {
                   for(size_t i = 0; i < current_width; ++i) {
                       result[i] = result[(i<<1)] + result[(i<<1)+1];
                   }
               }
               return result[0];
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::386
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               typename Vec::register_type result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) { result[i] = value[i]; }
               #pragma unroll cilog2(Vec::vector_element_count())
               for(size_t current_width = (Vec::vector_element_count()>>1); current_width >= 1; current_width>>=1) {
                   for(size_t i = 0; i < current_width; ++i) {
                       result[i] = result[(i<<1)] + result[(i<<1)+1];
                   }
               }
               return result[0];
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::386
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<float, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               typename Vec::register_type result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) { result[i] = value[i]; }
               #pragma unroll cilog2(Vec::vector_element_count())
               for(size_t current_width = (Vec::vector_element_count()>>1); current_width >= 1; current_width>>=1) {
                   for(size_t i = 0; i < current_width; ++i) {
                       result[i] = result[(i<<1)] + result[(i<<1)+1];
                   }
               }
               return result[0];
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::425
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<uint64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint64_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               using T = typename Vec::base_type;
               T result = 0; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); i+=16) {
                 T add_1_1 = value[ 0] + value[ 1];
                 T add_1_2 = value[ 2] + value[ 3];
                 T add_1_3 = value[ 4] + value[ 5];
                 T add_1_4 = value[ 6] + value[ 7];

                 T add_2_1 = add_1_1 + add_1_2;
                 T add_2_2 = add_1_3 + add_1_4;

                 result += add_2_1 + add_2_2;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::425
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<int64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int64_t, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               using T = typename Vec::base_type;
               T result = 0; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); i+=16) {
                 T add_1_1 = value[ 0] + value[ 1];
                 T add_1_2 = value[ 2] + value[ 3];
                 T add_1_3 = value[ 4] + value[ 5];
                 T add_1_4 = value[ 6] + value[ 7];

                 T add_2_1 = add_1_1 + add_1_2;
                 T add_2_2 = add_1_3 + add_1_4;

                 result += add_2_1 + add_2_2;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "hadd" (primitive hadd).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/calc.yaml::425
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct hadd<simd<double, fpga, VectorSize>, Idof> {
            using Vec = simd<double, fpga, VectorSize>;
            
            using return_type = typename Vec::base_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {

               using T = typename Vec::base_type;
               T result = 0; //initialize the result
               #pragma unroll
               for(int i = 0; i < Vec::vector_element_count(); i+=16) {
                 T add_1_1 = value[ 0] + value[ 1];
                 T add_1_2 = value[ 2] + value[ 3];
                 T add_1_3 = value[ 4] + value[ 5];
                 T add_1_4 = value[ 6] + value[ 7];

                 T add_2_1 = add_1_1 + add_1_2;
                 T add_2_2 = add_1_3 + add_1_4;

                 result += add_2_1 + add_2_2;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of hadd for fpga using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_FPGA_HPP