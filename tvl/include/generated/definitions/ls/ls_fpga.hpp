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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/definitions/ls/ls_fpga.hpp
 * \date 2023-03-23
 * \brief Load/Store primitives
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_LS_LS_FPGA_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_LS_LS_FPGA_HPP

#include "../../declarations/ls.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<int8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<int16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<int32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<float, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint64_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<int64_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::80
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct load<simd<double, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               auto mem = assume_aligned<Vec::vector_alignment()>(memory);
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = mem[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of load for fpga using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<float, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint64_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int64_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::169
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<double, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type * memory
            ) {

               using T = typename Vec::register_type;
               T reg; //initialize the result
               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 reg[idx] = memory[idx];
               }
               return reg;
            }
         };
   } // end of namespace functors for template specialization of loadu for fpga using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint8_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<int8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int8_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint16_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<int16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int16_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint32_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int32_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<float, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint64_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<int64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int64_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::257
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct store<simd<double, fpga, VectorSize>, Idof> {
            using Vec = simd<double, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of store for fpga using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint8_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int8_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint16_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int16_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint32_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int32_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<float, fpga, VectorSize>, Idof> {
            using Vec = simd<float, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint64_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int64_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int64_t, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::340
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<double, fpga, VectorSize>, Idof> {
            using Vec = simd<double, fpga, VectorSize>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               #pragma unroll
               for (size_t idx = 0; idx < Vec::vector_element_count(); idx++) {
                 memory[idx] = data[idx];
               }
            }
         };
   } // end of namespace functors for template specialization of storeu for fpga using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int8_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int16_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int32_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: float
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<float, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint64_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int64_t
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int64_t, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: fpga.
       *        Data Type: double
       *  Extension Flags: ['fpga']
       *      Yaml Source: primitive_data/primitives/ls.yaml::470
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct set1<simd<double, fpga, VectorSize>, Idof> {
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
                const typename Vec::base_type value
            ) {

               using T = typename Vec::register_type;
               T result;
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 result[i] = value;
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of set1 for fpga using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DEFINITIONS_LS_LS_FPGA_HPP