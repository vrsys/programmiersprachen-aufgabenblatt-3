cmake_minimum_required(VERSION 3.14)
project(programmiersprachen-aufgabenblatt_3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if(("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang") OR ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU") OR (("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel") AND (UNIX OR APPLE) ))
# set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++17")
  set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")

endif()
find_package(OpenGL REQUIRED)

# Add externals
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external)
add_definitions(-DGLEW_STATIC)

set(CATCH_DIRECTORY catch2)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/${CATCH_DIRECTORY})

#if(MSVC)
# set(${CMAKE_CXX_FLAGS} "/std:c++17")
# add_definitions(-D_CRT_SECURE_NO_WARNINGS)
#else(MSVC)
#  set(${CMAKE_CXX_FLAGS} "--std=c++17")
#endif(MSVC)

add_subdirectory(source)
