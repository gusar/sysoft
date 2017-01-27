cmake_minimum_required(VERSION 3.6)
project(sysoft)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES
        lab1/main.c
        lab1/area_of_rectangle.h
        lab1/area_of_rectangle.c
        lab1/area_of_triangle.c
        lab1/area_of_triangle.h
        lab1/area_of_circle.c
        lab1/area_of_circle.h)
add_executable(sysoft ${SOURCE_FILES})