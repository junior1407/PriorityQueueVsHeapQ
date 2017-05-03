cmake_minimum_required(VERSION 3.7)
project(PriorityQueueVsHeapQ)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c src/PriorityQueue.c inc/PriorityQueue.h)
add_executable(PriorityQueueVsHeapQ ${SOURCE_FILES})