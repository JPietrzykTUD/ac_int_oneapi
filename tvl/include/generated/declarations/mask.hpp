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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/declarations/mask.hpp
 * \date 2023-03-23
 * \brief Mask related primitives.
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP

namespace tvl {
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "to_integral".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_integral{};
   }
   /*
    * \brief Forms an integral value from the most significant bits of every lane in a vector mask register.
    * \details todo.
    * \param vec_mask Vector mask register containing mask style data.
    * \return Integral value representing of the vector mask register.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::imask_type to_integral(
          const typename Vec::mask_type vec_mask
      ) {
         return functors::to_integral<Vec, Idof>::apply(
            vec_mask
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "to_vector".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_vector{};
   }
   /*
    * \brief Forms an vector register from an integral where all bits are set in a lane if the corresponding mask bit is set to 1.
    * \details todo.
    * \param mask Vector mask register containing mask style data.
    * \return Integral value representing the vector mask register.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type to_vector(
          const typename Vec::mask_type mask
      ) {
         return functors::to_vector<Vec, Idof>::apply(
            mask
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP