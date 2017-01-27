cmake_minimum_required(VERSION 3.6)
project(sysoft)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES lab1/main.c lab1/area_of_rectangle.h lab1/area_of_rectangle.c)
add_executable(sysoft ${SOURCE_FILES})