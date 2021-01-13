cmake_minimum_required(VERSION 3.17)
project(TADFuncionario C)

set(CMAKE_C_STANDARD 99)

add_executable(Consulter main.c Employee/Employee.c Department/Department.c Utils/Utils.c Utils/Utils.h)