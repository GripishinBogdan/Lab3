cmake_minimum_required(VERSION 3.5)
project(Equation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Equation.cpp Equation.h)
add_executable(Equation ${SOURCE_FILES})
