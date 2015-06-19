cmake_minimum_required(VERSION 3.2)
project(trolo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_LINUX -std=c++11")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set(COMMON_LIBS /opt/sb6/lib/libsb6.a glfw ${GLFW_LIBRARIES} GL dl)

#add_library(sb6
#src/sb6/sb6.cpp
#src/sb6/sb6ktx.cpp
#src/sb6/sb6object.cpp
#src/sb6/sb6shader.cpp
#src/sb6/gl3w.c
#)

include_directories( /opt/sb6/include )

add_subdirectory(src)