cmake_policy(SET CMP0048 NEW)
cmake_minimum_required( VERSION 3.5 FATAL_ERROR )
project(gpr VERSION 1.1.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 99)
SET(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libstdc++")

set(GIT_BRANCH "")
set(GIT_COMMIT_HASH "")
if(EXISTS "${CMAKE_SOURCE_DIR}/.git")
  find_package(Git)
  if(GIT_FOUND)
    execute_process(
      COMMAND ${GIT_EXECUTABLE} rev-parse --abbrev-ref HEAD
      WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
      OUTPUT_VARIABLE GIT_BRANCH
      OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    execute_process(
      COMMAND ${GIT_EXECUTABLE} log -1 --format=%h
      WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
      OUTPUT_VARIABLE GIT_COMMIT_HASH
      OUTPUT_STRIP_TRAILING_WHITESPACE
    )
  endif()
endif()
message(STATUS "Git current branch: ${GIT_BRANCH}")
message(STATUS "Git commit hash: ${GIT_COMMIT_HASH}")

add_definitions("-DGIT_COMMIT_HASH=\"${GIT_COMMIT_HASH}\"")
add_definitions("-DGIT_BRANCH=\"${GIT_BRANCH}\"")
if(MSVC)
  add_definitions("-D_CRT_SECURE_NO_DEPRECATE")
  add_definitions("-D_CRT_NONSTDC_NO_DEPRECATE")
endif()
if(WIN32)
  add_definitions("-DUNICODE")
  add_definitions("-D_UNICODE")
  if(NOT CMAKE_DEBUG_POSTFIX)
    set(CMAKE_DEBUG_POSTFIX "d")
  endif()
endif()

# add needed subdirectories
add_subdirectory( "source/lib/common" )
add_subdirectory( "source/lib/vc5_common" )
add_subdirectory( "source/lib/vc5_decoder" )
add_subdirectory( "source/lib/vc5_encoder" )
add_subdirectory( "source/lib/dng_sdk" )
add_subdirectory( "source/lib/xmp_core" )
add_subdirectory( "source/lib/expat_lib" )
add_subdirectory( "source/lib/zlib" )
add_subdirectory( "source/lib/tiny_jpeg" )
add_subdirectory( "source/app/common/cJSON" )
add_subdirectory( "source/app/common/argument_parser" )

add_subdirectory( "source/lib/gpr_sdk" )
add_subdirectory( "source/app/gpr_tools" )
if(${GPR_ENABLE_VC5_DECODER})
  add_subdirectory( "source/app/vc5_decoder_app" )
endif()
if(${GPR_ENABLE_VC5_ENCODER})
  add_subdirectory( "source/app/vc5_encoder_app" )
endif()
