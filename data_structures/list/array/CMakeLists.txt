cmake_minimum_required(VERSION 3.17)
project(array C)

set(CMAKE_C_STANDARD 99)

LINK_DIRECTORIES(.)

add_executable(array test.c array.c)