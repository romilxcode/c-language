cmake_minimum_required(VERSION 4.0)
project(logical_operators)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(logical_operators
        logical.c
        logical.exe)
