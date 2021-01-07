cmake_minimum_required(VERSION 3.13)
project(adt)

set(CMAKE_C_STANDARD 99)

LINK_DIRECTORIES(.)

add_executable(adt test.c point.c)