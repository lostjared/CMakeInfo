
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(test05-cond LANGUAGES CXX)

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
set(USE_LIB OFF)

list(APPEND source_files test_output.hpp test_output.cpp)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
list(APPEND COMPILER_FLAGS "-Wall" "-O2")
else()
message(STATUS "Debug Mode")
list(APPEND COMPILER_FLAGS "-Wall" "-g")
endif()

if(USE_LIBS) 
	add_library(sharedhello SHARED ${source_files})
	set_target_properties(sharedhello PROPERTIES POSITION_INDEPENDENT_CODE 1)
	add_executable(testprogram main.cpp)
	target_compile_options(testprogram PRIVATE ${COMPILER_FLAGS})
	target_link_libraries(testprogram sharedhello)
else()
	add_executable(testprogram main.cpp ${source_files})
	target_compile_options(testprogram PRIVATE ${COMPILER_FLAGS})
endif()

