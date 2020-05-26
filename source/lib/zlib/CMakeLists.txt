set( LIB_NAME zlib )

include(CheckTypeSize)
include(CheckFunctionExists)
include(CheckIncludeFile)
include(CheckCSourceCompiles)
check_include_file(sys/types.h HAVE_SYS_TYPES_H)
check_include_file(stdint.h    HAVE_STDINT_H)
check_include_file(stddef.h    HAVE_STDDEF_H)
set(CMAKE_REQUIRED_DEFINITIONS)
if(HAVE_SYS_TYPES_H)
    list(APPEND CMAKE_REQUIRED_DEFINITIONS -DHAVE_SYS_TYPES_H)
endif()
if(HAVE_STDINT_H)
    list(APPEND CMAKE_REQUIRED_DEFINITIONS -DHAVE_STDINT_H)
endif()
if(HAVE_STDDEF_H)
    list(APPEND CMAKE_REQUIRED_DEFINITIONS -DHAVE_STDDEF_H)
endif()
check_type_size(off64_t OFF64_T)
if(HAVE_OFF64_T AND NOT WIN32)
   list(APPEND CMAKE_REQUIRED_DEFINITIONS -D_LARGEFILE64_SOURCE=1)
endif()
check_function_exists(fseeko HAVE_FSEEKO)
if(NOT HAVE_FSEEKO)
    list(APPEND CMAKE_REQUIRED_DEFINITIONS -DNO_FSEEKO)
endif()
check_include_file(unistd.h Z_HAVE_UNISTD_H)
if(MSVC)
    list(APPEND CMAKE_REQUIRED_DEFINITIONS -D_CRT_SECURE_NO_DEPRECATE)
    list(APPEND CMAKE_REQUIRED_DEFINITIONS -D_CRT_NONSTDC_NO_DEPRECATE)
endif()

set(ZLIB_HDRS
    zconf.h
    zlib.h
    crc32.h
    deflate.h
    gzguts.h
    inffast.h
    inffixed.h
    inflate.h
    inftrees.h
    trees.h
    zutil.h
)
set(ZLIB_SRCS
    adler32.c
    compress.c
    crc32.c
    deflate.c
    gzclose.c
    gzlib.c
    gzread.c
    gzwrite.c
    inflate.c
    infback.c
    inftrees.c
    inffast.c
    trees.c
    uncompr.c
    zutil.c
)

add_library(${LIB_NAME} STATIC ${ZLIB_SRCS} ${ZLIB_HDRS})
set_target_properties(${LIB_NAME} PROPERTIES FOLDER lib)
target_compile_definitions(${LIB_NAME} PRIVATE ${CMAKE_REQUIRED_DEFINITIONS})
