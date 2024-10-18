cmake_minimum_required(VERSION 3.29.6)

project(rene-lang VERSION 0.1 LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(rene main.c)

