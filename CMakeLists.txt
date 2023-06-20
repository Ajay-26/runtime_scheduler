cmake_minimum_required(VERSION 3.15)

project(parallel_scheduler)

include_directories(
    inc/scheduler
    inc/queue
    )

file(GLOB SOURCES src/*/*.cpp)
set(SOURCES ${SOURCES} src/main.cpp)
message(STATUS "value of source is ${SOURCES}")
add_executable(main ${SOURCES})