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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/declarations/binary.hpp
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_BINARY_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_BINARY_HPP

namespace tvl {
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "binary_and".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct binary_and{};
   }
   /*
    * \brief Binary ANDs two vector registers.
    * \details todo.
    * \param a First vector.
    * \param b Second vector.
    * \return Vector containing result of the binary AND.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type binary_and(
          const typename Vec::register_type a, const typename Vec::register_type b
      ) {
         return functors::binary_and<Vec, Idof>::apply(
            a,b
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "binary_xor".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct binary_xor{};
   }
   /*
    * \brief Binary XORs two vector registers.
    * \details todo.
    * \param a First vector.
    * \param b Second vector.
    * \return Vector containing result of the binary XOR.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type binary_xor(
          const typename Vec::register_type a, const typename Vec::register_type b
      ) {
         return functors::binary_xor<Vec, Idof>::apply(
            a,b
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "shift_right".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_right{};
   }
   /*
    * \brief Shifts data to right by n bits (shifting in 0).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the right shift.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type shift_right(
          const typename Vec::register_type data, const int shift
      ) {
         return functors::shift_right<Vec, Idof>::apply(
            data,shift
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "shift_left".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_left{};
   }
   /*
    * \brief Shifts data to left by n bits (shifting in 0).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the right shift.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type shift_left(
          const typename Vec::register_type data, const int shift
      ) {
         return functors::shift_left<Vec, Idof>::apply(
            data,shift
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "clz".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct clz{};
   }
   /*
    * \brief Counts leading zeros.
    * \details todo.
    * \param data Data.
    * \return Vector containing the leading zero count which is represented in unsigned ints.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::offset_base_register_type clz(
          const typename Vec::register_type data
      ) {
         return functors::clz<Vec, Idof>::apply(
            data
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_BINARY_HPP