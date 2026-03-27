cmake_minimum_required(VERSION 3.14)
project(programmiersprachen-aufgabenblatt_3)


# define cxx standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if(("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang") OR ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU") OR (("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel") AND (UNIX OR APPLE) ))
  set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")

endif()

# Add externals
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external)

set(DOCTEST_DIRECTORY doctest)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/${DOCTEST_DIRECTORY})

add_subdirectory(source)
