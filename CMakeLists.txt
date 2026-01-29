cmake_minimum_required(VERSION 4.1)
project(hello_world C ASM)
set(CMAKE_C_STANDARD 23)
add_executable(
    hello_world
    standardLibrary/system/systemCalls.s
    standardLibrary/inputOutput.c
    standardLibrary/String.c
    main.c
)
target_compile_options(hello_world PRIVATE -fno-builtin)
target_link_options(hello_world PRIVATE -static -nostdlib)