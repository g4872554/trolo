cmake_minimum_required(VERSION 3.1)
project(trolo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(src)