
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(test05-cond LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQURIED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(USE_LIB OFF)

list(APPEND source_files test_output.hpp test_output.cpp)

if(USE_LIBS) 
	add_library(sharedhello SHARED ${source_files})
	set_target_properties(sharedhello PROPERTIES POSITION_INDEPENDENT_CODE 1)
	add_executable(testprogram main.cpp)
	target_link_libraries(testprogram sharedhello)
else()
	add_executable(testprogram main.cpp ${source_files})
endif()

