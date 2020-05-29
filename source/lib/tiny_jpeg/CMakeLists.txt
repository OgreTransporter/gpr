option(GPR_ENABLE_JPEG "Enable jpeg writing" ON)

if(${GPR_ENABLE_JPEG})
  # base directory
  set(LIB_TJPG_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_TJPG_SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/jpeg.c
    PARENT_SCOPE)
  
  # include files
  set(LIB_TJPG_INC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/jpeg.h
    ${CMAKE_CURRENT_SOURCE_DIR}/tiny_jpeg.h
    PARENT_SCOPE)
  
  # include directories
  set(LIB_TJPG_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    PARENT_SCOPE)
  
  # link
  set(LIB_TJPG_LIBRARIES PARENT_SCOPE)
  
  # define
  set(LIB_TJPG_DEFINE
    GPR_JPEG_AVAILABLE=1
    PARENT_SCOPE)
  message(STATUS "JPEG writing support enabled")
else()
  # base directory
  set(LIB_TJPG_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_TJPG_SRC_FILES PARENT_SCOPE)
  
  # include files
  set(LIB_TJPG_INC_FILES PARENT_SCOPE)
  
  # include directories
  set(LIB_TJPG_INCLUDE_DIRS PARENT_SCOPE)
  
  # link
  set(LIB_TJPG_LIBRARIES PARENT_SCOPE)
  
  # define
  set(LIB_TJPG_DEFINE
    GPR_JPEG_AVAILABLE=0
    PARENT_SCOPE)
  message(STATUS "JPEG writing support disabled")
endif()
