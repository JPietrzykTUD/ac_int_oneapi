cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE ON)
add_library(tvl INTERFACE)
target_compile_features(tvl INTERFACE cxx_std_17)

target_sources(tvl
   INTERFACE include/tvlintrin.hpp
   INTERFACE include/static/tvl_static.hpp
   INTERFACE include/static/simd/simd_type.hpp
   INTERFACE include/static/simd/simd_type_concepts.hpp
   INTERFACE include/static/simd/simd_primitive_concepts.hpp
   INTERFACE include/static/utils/type_concepts.hpp
   INTERFACE include/static/utils/type_helper.hpp
   INTERFACE include/static/utils/preprocessor.hpp
   INTERFACE include/generated/tvl_generated.hpp
   INTERFACE include/generated/extensions/simd/intel/fpga.hpp
   INTERFACE include/generated/extensions/scalar.hpp
   INTERFACE include/generated/declarations/ls.hpp
   INTERFACE include/generated/declarations/convert.hpp
   INTERFACE include/generated/declarations/memory.hpp
   INTERFACE include/generated/declarations/misc.hpp
   INTERFACE include/generated/declarations/calc.hpp
   INTERFACE include/generated/declarations/mask.hpp
   INTERFACE include/generated/declarations/binary.hpp
   INTERFACE include/generated/declarations/compare.hpp
   INTERFACE include/generated/definitions/ls/ls_scalar.hpp
   INTERFACE include/generated/definitions/ls/ls_fpga.hpp
   INTERFACE include/generated/definitions/convert/convert_scalar.hpp
   INTERFACE include/generated/definitions/convert/convert_fpga.hpp
   INTERFACE include/generated/definitions/memory/memory_scalar.hpp
   INTERFACE include/generated/definitions/misc/misc_scalar.hpp
   INTERFACE include/generated/definitions/calc/calc_scalar.hpp
   INTERFACE include/generated/definitions/calc/calc_fpga.hpp
   INTERFACE include/generated/definitions/mask/mask_scalar.hpp
   INTERFACE include/generated/definitions/mask/mask_fpga.hpp
   INTERFACE include/generated/definitions/binary/binary_scalar.hpp
   INTERFACE include/generated/definitions/binary/binary_fpga.hpp
   INTERFACE include/generated/definitions/compare/compare_scalar.hpp
   INTERFACE include/generated/definitions/compare/compare_fpga.hpp
)
target_include_directories(tvl INTERFACE include/)
target_compile_options(tvl INTERFACE  -Wno-ignored-attributes -Wno-attributes -Wno-deprecated-declarations -flax-vector-conversions)
add_subdirectory(src/test)
