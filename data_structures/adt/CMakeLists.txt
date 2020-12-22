cmake_minimum_required(VERSION 3.13)
project(adt)

set(CMAKE_CXX_STANDARD 14)

LINK_DIRECTORIES(.)

add_executable(adt test.c point.c)