
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(test04-shared LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQURIED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


list(APPEND source_files test_output.hpp test_output.cpp)
add_library(sayhello ${source_files})
add_executable(testprogram main.cpp)
target_link_libraries(testprogram sayhello)
