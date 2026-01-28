cmake_minimum_required(VERSION 4.1)
project(hello_world C ASM)
set(CMAKE_C_STANDARD 23)
add_executable(
    hello_world main.c
    standardLibrary/system/ArgumentCount.h
    standardLibrary/system/Buffer.h
    standardLibrary/system/ExitStatus.h
    standardLibrary/system/FileDescriptor.h
    standardLibrary/system/SignedSize.h
    standardLibrary/system/Size.h
    standardLibrary/system/systemCalls.h
    standardLibrary/system/systemCalls.s
    standardLibrary/inputOutput.c
    standardLibrary/inputOutput.h
    standardLibrary/Length.h
    standardLibrary/String.c
    standardLibrary/String.h
)
