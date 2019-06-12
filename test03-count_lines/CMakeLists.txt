
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(test03-count_lines LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQURIED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_executable(count_lines count_lines.cpp)
