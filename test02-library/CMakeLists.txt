
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(test02 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQURIED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(catstring STATIC hello.hpp hello.cpp)
add_executable(hello-world main.cpp)
target_link_libraries(hello-world catstring)

