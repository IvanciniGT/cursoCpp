cmake_minimum_required(VERSION 3.16)
project(figuras)

set(CMAKE_CXX_STANDARD 14)

add_executable(figuras main.cpp punto.h punto.cpp vector.cpp cuadrado.h cuadrado.cpp rectangulo.h rectangulo.cpp)