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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/convert/convert_scalar.hpp
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_SCALAR_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_SCALAR_HPP

#include "../../declarations/convert.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, scalar>, simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            using ToType = simd<int8_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, scalar>, simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using ToType = simd<uint8_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, scalar>, simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            using ToType = simd<int16_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, scalar>, simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using ToType = simd<uint16_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, scalar>, simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            using ToType = simd<int32_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, scalar>, simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using ToType = simd<uint32_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, scalar>, simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            using ToType = simd<int64_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, scalar>, simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using ToType = simd<uint64_t, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, scalar>, simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            using ToType = simd<float, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/convert.yaml::134
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, scalar>, simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            using ToType = simd<double, scalar>;
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

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for scalar using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_SCALAR_HPP