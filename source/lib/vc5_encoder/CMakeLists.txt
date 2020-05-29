option(GPR_ENABLE_VC5_ENCODER "Enable VC5 encoder" ON)

if(${GPR_ENABLE_VC5_ENCODER})
  # base directory
  set(LIB_VC5_ENCODER_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_VC5_ENCODER_SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/codebooks.c
    ${CMAKE_CURRENT_SOURCE_DIR}/component.c
    ${CMAKE_CURRENT_SOURCE_DIR}/encoder.c
    ${CMAKE_CURRENT_SOURCE_DIR}/forward.c
    ${CMAKE_CURRENT_SOURCE_DIR}/parameters.c
    ${CMAKE_CURRENT_SOURCE_DIR}/raw.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sections.c
    ${CMAKE_CURRENT_SOURCE_DIR}/syntax.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vc5_encoder.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vlc.c
    PARENT_SCOPE)
  
  # include files
  set(LIB_VC5_ENCODER_INC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/codebooks.h
    ${CMAKE_CURRENT_SOURCE_DIR}/component.h
    ${CMAKE_CURRENT_SOURCE_DIR}/encoder.h
    ${CMAKE_CURRENT_SOURCE_DIR}/forward.h
    ${CMAKE_CURRENT_SOURCE_DIR}/headers.h
    ${CMAKE_CURRENT_SOURCE_DIR}/parameters.h
    ${CMAKE_CURRENT_SOURCE_DIR}/raw.h
    ${CMAKE_CURRENT_SOURCE_DIR}/sections.h
    ${CMAKE_CURRENT_SOURCE_DIR}/syntax.h
    ${CMAKE_CURRENT_SOURCE_DIR}/vc5_encoder.h
    ${CMAKE_CURRENT_SOURCE_DIR}/vlc.h
    PARENT_SCOPE)
  
  # include directories
  set(LIB_VC5_ENCODER_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    PARENT_SCOPE)
  
  # link
  set(LIB_VC5_ENCODER_LIBRARIES PARENT_SCOPE)
  
  # define
  set(LIB_VC5_ENCODER_DEFINE
    GPR_WRITING=1
    PARENT_SCOPE)
  message(STATUS "VC5 encoder enabled")
else()
  # base directory
  set(LIB_VC5_ENCODER_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_VC5_ENCODER_SRC_FILES PARENT_SCOPE)
  
  # include files
  set(LIB_VC5_ENCODER_INC_FILES PARENT_SCOPE)
  
  # include directories
  set(LIB_VC5_ENCODER_INCLUDE_DIRS PARENT_SCOPE)
  
  # link
  set(LIB_VC5_ENCODER_LIBRARIES PARENT_SCOPE)
  
  # define
  set(LIB_VC5_ENCODER_DEFINE
    GPR_WRITING=0
    PARENT_SCOPE)
  message(STATUS "VC5 encoder disabled")
endif()
