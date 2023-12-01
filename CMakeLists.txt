cmake_minimum_required(VERSION 3.0)
project(triangle)

set(CMAKE_CXX_STANDARD 17)
set(Headers Punto.h)
set(Headers Triangle.h)

add_executable(triangle ${PROJECT_SOURCE_DIR}/ main.cpp Triangle.cpp Punto.cpp)
