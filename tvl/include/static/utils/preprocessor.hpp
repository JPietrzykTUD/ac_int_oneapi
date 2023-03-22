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
 * \file /home/jpietrzyk/Own/Work/oneapi/ac_int_oneapi/tvl/include/static/utils/preprocessor.hpp
 * \date 2023-03-23
 * \brief TODO.
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

#ifndef TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP
#define TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP

namespace tvl {
   #ifndef TVL_FORCE_INLINE
#  if defined(__clang__) || defined(__GNUC__)
#    define TVL_FORCE_INLINE inline __attribute__((always_inline))
#  elif defined(_MSC_VER)
#    define TVL_FORCE_INLINE inline __forceinline
#  endif
#endif
#ifndef TVL_NO_NATIVE_SUPPORT_WARNING
#   define TVL_NO_NATIVE_SUPPORT_WARNING [[deprecated("This primitive is not supported by your hardware natively. Thus, a workaround is used.")]]
#endif
#ifndef TVL_DEP_TYPE
#   define TVL_DEP_TYPE(CONDITION, IFBRANCH, ELSEBRANCH) std::conditional_t< CONDITION, IFBRANCH, ELSEBRANCH >
#endif
#ifndef TVL_CVAL
#   define TVL_CVAL(type, value) std::integral_constant<type,value>{}
#endif
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_JPIETRZYK_OWN_WORK_ONEAPI_AC_INT_ONEAPI_TVL_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP