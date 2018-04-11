cmake_minimum_required(VERSION 3.7)
project(QuickMath)

set(CMAKE_CXX_STANDARD 11)

add_executable(QuickMath
        main.cpp
        pascal.cpp
        pascal.h
        factorial.c
        userInput.h)
