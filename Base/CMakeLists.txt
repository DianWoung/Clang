cmake_minimum_required(VERSION 3.7)
project(Base)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c types.c pointer.c numbers.c)
add_executable(Base ${SOURCE_FILES})