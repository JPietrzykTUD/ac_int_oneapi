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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/generated/declarations/misc.hpp
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP

namespace tvl {
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "conflict".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct conflict{};
   }
   /*
    * \brief Checks whether all elements are unique in a register.
    * \details todo.
    * \param data Data vector.
    * \return Vector containing result of the uniqueness check.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type conflict(
          [[maybe_unused]] const typename Vec::register_type data
      ) {
         return functors::conflict<Vec, Idof>::apply(
            data
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "imask_conflict_free".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free{};
   }
   /*
    * \brief Checks whether all elements are unique in a register and returns a mask indicating which elements don't have preceeding conflicts.
    * \details todo.
    * \param mask Mask indicating which lanes should be considered for conflict detection. Be aware, that non-valid lanes can still conflict with others.
    * \param data Data vector.
    * \return integral mask containing result of the uniqueness check.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::imask_type conflict_free(
          [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
      ) {
         return functors::imask_conflict_free<Vec, Idof>::apply(
            mask,data
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP