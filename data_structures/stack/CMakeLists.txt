cmake_minimum_required(VERSION 3.17)
project(stack)

set(CMAKE_C_STANDARD 99)

LINK_DIRECTORIES(.)

add_executable(stack test.c stack.c)