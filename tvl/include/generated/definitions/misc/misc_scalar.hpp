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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/misc/misc_scalar.hpp
 * \date 2023-03-23
 * \brief Miscellaneous primitives.
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP

#include "../../declarations/misc.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::104
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::211
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {

               return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP