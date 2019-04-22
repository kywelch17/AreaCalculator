cmake_minimum_required(VERSION 3.14)
project(AreaCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(AreaCalculator main.cpp main.cpp circle.cpp circle.h square.cpp square.h triangle.cpp shape.cpp shape.h triangle.h cuboid.cpp cuboid.h cylinder.cpp cylinder.h)