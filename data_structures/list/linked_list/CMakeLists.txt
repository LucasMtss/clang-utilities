cmake_minimum_required(VERSION 3.17)
project(linked_list)

set(CMAKE_C_STANDARD 99)

LINK_DIRECTORIES(.)

add_executable(linked_list test.c linked_list.c)