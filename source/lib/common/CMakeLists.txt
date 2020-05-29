# base directory
set(LIB_COMMON_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)

# source files
set(LIB_COMMON_SRC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/private/gpr_allocator.c
  ${CMAKE_CURRENT_SOURCE_DIR}/private/gpr_buffer.c
  ${CMAKE_CURRENT_SOURCE_DIR}/private/gpr_buffer_auto.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/private/log.c
  ${CMAKE_CURRENT_SOURCE_DIR}/private/timer.c
  PARENT_SCOPE)

# include files
set(LIB_COMMON_INC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/private/gpr_buffer_auto.h
  ${CMAKE_CURRENT_SOURCE_DIR}/private/log.h
  ${CMAKE_CURRENT_SOURCE_DIR}/private/macros.h
  ${CMAKE_CURRENT_SOURCE_DIR}/private/stdcpp_includes.h
  ${CMAKE_CURRENT_SOURCE_DIR}/private/stdc_includes.h
  ${CMAKE_CURRENT_SOURCE_DIR}/private/timer.h
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_allocator.h
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_buffer.h
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_platform.h
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_rgb_buffer.h
  PARENT_SCOPE)

# include directories
set(LIB_COMMON_INCLUDE_DIRS
  ${CMAKE_CURRENT_SOURCE_DIR}/public
  ${CMAKE_CURRENT_SOURCE_DIR}/private
  PARENT_SCOPE)

# link
set(LIB_COMMON_LIBRARIES PARENT_SCOPE)

# define
set(LIB_COMMON_DEFINE PARENT_SCOPE)

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_allocator.h
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_buffer.h
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_platform.h
  ${CMAKE_CURRENT_SOURCE_DIR}/public/gpr_rgb_buffer.h
  DESTINATION include/gpr)