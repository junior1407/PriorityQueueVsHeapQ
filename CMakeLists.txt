cmake_minimum_required(VERSION 3.7)
project(PriorityQueueVsHeapQ)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c src/PriorityQueue.c inc/PriorityQueue.h)
set(SOURCE_teste main2.c.c)
add_executable(PriorityQueueVsHeapQ ${SOURCE_FILES})
add_executable(Testes ${SOURCE_teste}   )