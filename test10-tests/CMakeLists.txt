
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(test10-package LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

message(STATUS "Build configuration is: ${CMAKE_BUILD_TYPE}")
message(STATUS "is the C++ compiler loaded? ${CMAKE_CXX_COMPILER_LOADED}")

if(CMAKE_CXX_COMPILER_LOADED)
	message(STATUS "The C++ Compiler ID is: ${CMAKE_CXX_COMPILER_ID}")
	message(STATUS "The C++ Compiler Version: ${CMAKE_CXX_COMPILER_VERSION}")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQURIED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
list(APPEND COMPILER_FLAGS "-Wall" "-O2")
else()
message(STATUS "Debug Mode")
list(APPEND COMPILER_FLAGS "-Wall" "-g")
endif()


add_library(testlib test_func.cpp test_func.hpp)
add_executable(test_program test.cpp)
target_compile_options(test_program PRIVATE ${COMPILER_FLAGS})
target_link_libraries(test_program testlib)

enable_testing()

add_test(NAME test_program COMMAND $<TARGET_FILE:test_program>)

