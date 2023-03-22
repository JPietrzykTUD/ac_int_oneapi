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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/binary/binary_fpga.hpp
 * \date 2023-03-23
 * \brief Bit manipulation primitives.
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_FPGA_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_FPGA_HPP

#include <sycl/ext/intel/ac_types/ac_int.hpp>
#include <climits>
#include "../../declarations/binary.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::135
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::135
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::135
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::135
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::135
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::135
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<uint8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<int8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int8_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<uint16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<int16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int16_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int32_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<uint64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint64_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::484
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<int64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int64_t, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(data[idx]);
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::504
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<float, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               using ret_t = typename Vec::offset_base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(*reinterpret_cast<ret_t const *>(&(data[idx])));
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "clz" (primitive clz).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/binary.yaml::504
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct clz<simd<double, fpga, VectorSize>, Idof> {
            using Vec = simd<double, fpga, VectorSize>;
            
            using return_type = typename Vec::offset_base_register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {

               // as the current version of oneAPI does not properly implement ac_int::leading_sign() we "reimplemented" it
               // /glob/development-tools/versions/oneapi/2023.0.1/oneapi/compiler/2023.0.0/linux/lib/oclfpga/include/sycl/ext/intel/ac_types/ac_int.hpp
               using base_t = typename Vec::base_type;
               using ret_t = typename Vec::offset_base_type;
               typename Vec::offset_base_register_type result{};
               using bitInt = ac_int<(sizeof(base_t)*CHAR_BIT), std::is_signed_v<base_t>>;
               #pragma unroll
               for(size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                  bitInt val = bitInt(*reinterpret_cast<ret_t const *>(&(data[idx])));
                  int k;
                  #pragma unroll
                  for(k = (sizeof(base_t)*CHAR_BIT)-1; k >= 0 && val[k] == 0; k--) {}
                  result[idx] = (sizeof(base_t)*CHAR_BIT) + ~k;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of clz for fpga using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_FPGA_HPP