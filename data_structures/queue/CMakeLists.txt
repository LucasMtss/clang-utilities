cmake_minimum_required(VERSION 3.17)
project(queue)

set(CMAKE_C_STANDARD 99)

LINK_DIRECTORIES(.)

add_executable(queue test.c queue.c)