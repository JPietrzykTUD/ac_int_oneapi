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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/compare/compare_scalar.hpp
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SCALAR_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SCALAR_HPP

#include "../../declarations/compare.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {

               return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SCALAR_HPP