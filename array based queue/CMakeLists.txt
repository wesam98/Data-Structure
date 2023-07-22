cmake_minimum_required(VERSION 3.25)
project(array_based_queue C)

set(CMAKE_C_STANDARD 11)

add_executable(array_based_queue main.c queue.c queue.h)
