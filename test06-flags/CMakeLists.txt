
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(test06-flags LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQURIED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(USE_LIB OFF)

list(APPEND source_files test_output.hpp test_output.cpp)

set(COMPILER_FLAGS)
list(APPEND COMPILER_FLAGS "-Wall" "-O3")

if(USE_LIBS) 
	add_library(sharedhello ${source_files})
	set_target_properties(sharedhello PROPERTIES POSITION_INDEPENDENT_CODE 1)
	add_executable(testprogram main.cpp)
    target_compile_options(testprogram PRIVATE ${COMPILER_FLAGS})
	target_link_libraries(testprogram sharedhello)
else()
    add_executable(testprogram main.cpp ${source_files})
    target_compile_options(testprogram PRIVATE ${COMPILER_FLAGS})
endif()

