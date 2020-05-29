option(GPR_ENABLE_VC5_DECODER "Enable VC5 decoder" ON)

if(${GPR_ENABLE_VC5_DECODER})
  # base directory
  set(LIB_VC5_DECODER_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_VC5_DECODER_SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/codebooks.c
    ${CMAKE_CURRENT_SOURCE_DIR}/component.c
    ${CMAKE_CURRENT_SOURCE_DIR}/decoder.c
    ${CMAKE_CURRENT_SOURCE_DIR}/dequantize.c
    ${CMAKE_CURRENT_SOURCE_DIR}/inverse.c
    ${CMAKE_CURRENT_SOURCE_DIR}/parameters.c
    ${CMAKE_CURRENT_SOURCE_DIR}/raw.c
    ${CMAKE_CURRENT_SOURCE_DIR}/syntax.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vc5_decoder.c
    ${CMAKE_CURRENT_SOURCE_DIR}/vlc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/wavelet.c
    PARENT_SCOPE)
  
  # include files
  set(LIB_VC5_DECODER_INC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/codebooks.h
    ${CMAKE_CURRENT_SOURCE_DIR}/component.h
    ${CMAKE_CURRENT_SOURCE_DIR}/decoder.h
    ${CMAKE_CURRENT_SOURCE_DIR}/dequantize.h
    ${CMAKE_CURRENT_SOURCE_DIR}/headers.h
    ${CMAKE_CURRENT_SOURCE_DIR}/inverse.h
    ${CMAKE_CURRENT_SOURCE_DIR}/parameters.h
    ${CMAKE_CURRENT_SOURCE_DIR}/raw.h
    ${CMAKE_CURRENT_SOURCE_DIR}/syntax.h
    ${CMAKE_CURRENT_SOURCE_DIR}/vc5_decoder.h
    ${CMAKE_CURRENT_SOURCE_DIR}/vlc.h
    ${CMAKE_CURRENT_SOURCE_DIR}/wavelet.h
    PARENT_SCOPE)
  
  # include directories
  set(LIB_VC5_DECODER_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    PARENT_SCOPE)
  
  # link
  set(LIB_VC5_DECODER_LIBRARIES PARENT_SCOPE)
  
  # define
  set(LIB_VC5_DECODER_DEFINE
    GPR_READING=1
    PARENT_SCOPE)
  message(STATUS "VC5 decoder enabled")
else()
  # base directory
  set(LIB_VC5_DECODER_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_VC5_DECODER_SRC_FILES PARENT_SCOPE)
  
  # include files
  set(LIB_VC5_DECODER_INC_FILES PARENT_SCOPE)
  
  # include directories
  set(LIB_VC5_DECODER_INCLUDE_DIRS PARENT_SCOPE)
  
  # link
  set(LIB_VC5_DECODER_LIBRARIES PARENT_SCOPE)
  
  # define
  set(LIB_VC5_DECODER_DEFINE
    GPR_READING=0
    PARENT_SCOPE)
  message(STATUS "VC5 decoder disabled")
endif()
