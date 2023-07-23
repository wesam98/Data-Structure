cmake_minimum_required(VERSION 3.25)
project(linked_Queue C)

set(CMAKE_C_STANDARD 11)

add_executable(linked_Queue main.c queue.c queue.h)
