option(GPR_SYSTEM_EXPAT "Use installed EXPAT library, instead of the bundled source code" OFF)

if(GPR_SYSTEM_EXPAT)
  find_package(EXPAT REQUIRED)
  if(NOT EXPAT_FOUND)
    message(FATAL_ERROR "The selected system library EXPAT could not be found! Disable GPR_SYSTEM_EXPAT to use the bundled source code.")
  endif()
endif()

if(GPR_SYSTEM_EXPAT)
  message(STATUS "Use the system library EXPAT")
  # base directory
  set(LIB_EXPAT_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_EXPAT_SRC_FILES PARENT_SCOPE)
  
  # include files
  set(LIB_EXPAT_INC_FILES PARENT_SCOPE)
  
  # include directories
  set(LIB_EXPAT_INCLUDE_DIRS
    ${EXPAT_INCLUDE_DIRS}
    PARENT_SCOPE)
  
  # link
  set(LIB_EXPAT_LIBRARIES
    ${EXPAT_LIBRARY}
    PARENT_SCOPE)
  
  # define
  set(LIB_EXPAT_DEFINE PARENT_SCOPE)
else()
  message(STATUS "Use the bundled source code for EXPAT library")
  # base directory
  set(LIB_EXPAT_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
  
  # source files
  set(LIB_EXPAT_SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/xmlparse.c
    ${CMAKE_CURRENT_SOURCE_DIR}/xmlrole.c
    ${CMAKE_CURRENT_SOURCE_DIR}/xmltok.c
    ${CMAKE_CURRENT_SOURCE_DIR}/xmltok_impl.c
    ${CMAKE_CURRENT_SOURCE_DIR}/xmltok_ns.c
    PARENT_SCOPE)
  
  # include files
  set(LIB_EXPAT_INC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/amigaconfig.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ascii.h
    ${CMAKE_CURRENT_SOURCE_DIR}/asciitab.h
    ${CMAKE_CURRENT_SOURCE_DIR}/expat.h
    ${CMAKE_CURRENT_SOURCE_DIR}/expat_external.h
    ${CMAKE_CURRENT_SOURCE_DIR}/iasciitab.h
    ${CMAKE_CURRENT_SOURCE_DIR}/internal.h
    ${CMAKE_CURRENT_SOURCE_DIR}/latin1tab.h
    ${CMAKE_CURRENT_SOURCE_DIR}/macconfig.h
    ${CMAKE_CURRENT_SOURCE_DIR}/nametab.h
    ${CMAKE_CURRENT_SOURCE_DIR}/siphash.h
    ${CMAKE_CURRENT_SOURCE_DIR}/utf8tab.h
    ${CMAKE_CURRENT_SOURCE_DIR}/winconfig.h
    ${CMAKE_CURRENT_SOURCE_DIR}/xmlrole.h
    ${CMAKE_CURRENT_SOURCE_DIR}/xmltok.h
    ${CMAKE_CURRENT_SOURCE_DIR}/xmltok_impl.h
    PARENT_SCOPE)
  
  # include directories
  set(LIB_EXPAT_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}
    PARENT_SCOPE)
  
  # link
  set(LIB_EXPAT_LIBRARIES PARENT_SCOPE)
  
  # define
  set(LIB_EXPAT_DEFINE
    XML_STATIC=1
    PARENT_SCOPE)
endif()
