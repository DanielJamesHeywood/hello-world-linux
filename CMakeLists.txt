cmake_minimum_required(VERSION 4.1)
project(hello_world C ASM)
set(CMAKE_C_STANDARD 23)
add_executable(
    hello_world main.c
    standardLibrary/system/systemCalls.s
    standardLibrary/inputOutput.c
    standardLibrary/String.c
)
target_link_options(hello_world PRIVATE -static -nostdlib)