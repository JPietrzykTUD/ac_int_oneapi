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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/convert/convert_fpga.hpp
 * \date 2023-03-23
 * \brief Conversion primitives.
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_FPGA_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_FPGA_HPP

#include "../../declarations/convert.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/convert.yaml::140
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, fpga, VectorSize>, simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            using ToType = simd<int32_t, fpga, VectorSize>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               using U = typename ToType::register_type;
               U result{};
               #pragma unroll
               for (size_t i = 0; i < Vec::vector_element_count(); ++i ) {
                 result[i] = *reinterpret_cast< typename ToType::base_type const * >( &(data[i]) );
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/convert.yaml::140
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, fpga, VectorSize>, simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            using ToType = simd<uint32_t, fpga, VectorSize>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               using U = typename ToType::register_type;
               U result{};
               #pragma unroll
               for (size_t i = 0; i < Vec::vector_element_count(); ++i ) {
                 result[i] = *reinterpret_cast< typename ToType::base_type const * >( &(data[i]) );
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/convert.yaml::140
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, fpga, VectorSize>, simd<int64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<double, fpga, VectorSize>;
            using ToType = simd<int64_t, fpga, VectorSize>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               using U = typename ToType::register_type;
               U result{};
               #pragma unroll
               for (size_t i = 0; i < Vec::vector_element_count(); ++i ) {
                 result[i] = *reinterpret_cast< typename ToType::base_type const * >( &(data[i]) );
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for fpga using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/convert.yaml::140
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, fpga, VectorSize>, simd<uint64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<double, fpga, VectorSize>;
            using ToType = simd<uint64_t, fpga, VectorSize>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               using U = typename ToType::register_type;
               U result{};
               #pragma unroll
               for (size_t i = 0; i < Vec::vector_element_count(); ++i ) {
                 result[i] = *reinterpret_cast< typename ToType::base_type const * >( &(data[i]) );
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for fpga using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_FPGA_HPP