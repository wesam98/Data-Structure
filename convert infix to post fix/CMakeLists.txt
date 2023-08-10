cmake_minimum_required(VERSION 3.25)
project(cat C)

set(CMAKE_C_STANDARD 11)

add_executable(cat main.c stack.h stack.c app.c)
