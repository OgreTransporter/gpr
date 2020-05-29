option(GPR_SYSTEM_ZLIB "Use installed ZLIB library, instead of the bundled source code" OFF)

if(GPR_SYSTEM_ZLIB)
  find_package(ZLIB REQUIRED)
  if(NOT ZLIB_FOUND)
    message(FATAL_ERROR "The selected system library ZLIB could not be found! Disable GPR_SYSTEM_ZLIB to use the bundled source code.")
  endif()
endif()

if(GPR_SYSTEM_ZLIB)
  message(STATUS "Use the system library ZLIB")
  # base directory
  set(LIB_ZLIB_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_ZLIB_SRC_FILES PARENT_SCOPE)
  
  # include files
  set(LIB_ZLIB_INC_FILES PARENT_SCOPE)
  
  # include directories
  set(LIB_ZLIB_INCLUDE_DIRS
    ${ZLIB_INCLUDE_DIRS}
    PARENT_SCOPE)
  
  # link
  set(LIB_ZLIB_LIBRARIES
    ${ZLIB_LIBRARIES}
    PARENT_SCOPE)
  
  # define
  set(LIB_ZLIB_DEFINE PARENT_SCOPE)
else()
  message(STATUS "Use the bundled source code for ZLIB library")
  # base directory
  set(LIB_ZLIB_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_ZLIB_SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/adler32.c
    ${CMAKE_CURRENT_SOURCE_DIR}/compress.c
    ${CMAKE_CURRENT_SOURCE_DIR}/crc32.c
    ${CMAKE_CURRENT_SOURCE_DIR}/deflate.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gzclose.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gzlib.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gzread.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gzwrite.c
    ${CMAKE_CURRENT_SOURCE_DIR}/infback.c
    ${CMAKE_CURRENT_SOURCE_DIR}/inffast.c
    ${CMAKE_CURRENT_SOURCE_DIR}/inflate.c
    ${CMAKE_CURRENT_SOURCE_DIR}/inftrees.c
    ${CMAKE_CURRENT_SOURCE_DIR}/trees.c
    ${CMAKE_CURRENT_SOURCE_DIR}/uncompr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/zutil.c
    PARENT_SCOPE)
  
  # include files
  set(LIB_ZLIB_INC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/crc32.h
    ${CMAKE_CURRENT_SOURCE_DIR}/deflate.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gzguts.h
    ${CMAKE_CURRENT_SOURCE_DIR}/inffast.h
    ${CMAKE_CURRENT_SOURCE_DIR}/inffixed.h
    ${CMAKE_CURRENT_SOURCE_DIR}/inflate.h
    ${CMAKE_CURRENT_SOURCE_DIR}/inftrees.h
    ${CMAKE_CURRENT_SOURCE_DIR}/trees.h
    ${CMAKE_CURRENT_SOURCE_DIR}/zconf.h
    ${CMAKE_CURRENT_SOURCE_DIR}/zlib.h
    ${CMAKE_CURRENT_SOURCE_DIR}/zutil.h
    PARENT_SCOPE)
  
  # include directories
  set(LIB_ZLIB_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    PARENT_SCOPE)
  
  # link
  set(LIB_ZLIB_LIBRARIES PARENT_SCOPE)
  
  # define
  include(CheckTypeSize)
  include(CheckFunctionExists)
  include(CheckIncludeFile)
  include(CheckCSourceCompiles)
  check_include_file(sys/types.h HAVE_SYS_TYPES_H)
  check_include_file(stdint.h    HAVE_STDINT_H)
  check_include_file(stddef.h    HAVE_STDDEF_H)
  set(LIB_ZLIB_DEFINE PARENT_SCOPE)
  if(HAVE_SYS_TYPES_H)
    list(APPEND LIB_ZLIB_DEFINE -DHAVE_SYS_TYPES_H)
  endif()
  if(HAVE_STDINT_H)
    list(APPEND LIB_ZLIB_DEFINE -DHAVE_STDINT_H)
  endif()
  if(HAVE_STDDEF_H)
    list(APPEND LIB_ZLIB_DEFINE -DHAVE_STDDEF_H)
  endif()
  check_type_size(off64_t OFF64_T)
  if(HAVE_OFF64_T AND NOT WIN32)
    list(APPEND LIB_ZLIB_DEFINE -D_LARGEFILE64_SOURCE=1)
  endif()
  check_function_exists(fseeko HAVE_FSEEKO)
  if(NOT HAVE_FSEEKO)
    list(APPEND LIB_ZLIB_DEFINE -DNO_FSEEKO)
  endif()
  check_include_file(unistd.h Z_HAVE_UNISTD_H)
endif()