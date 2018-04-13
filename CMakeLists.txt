cmake_minimum_required(VERSION 3.7)
project(QuickMath)

set(CMAKE_CXX_STANDARD 11)

add_executable(QuickMath.out
        main.cpp
        Pascal/pascal.cpp
        Pascal/pascal.h
        Factorial/factorial.cpp
        Factorial/factorial.h
        LinAlg/vector.cpp
        LinAlg/vector.h)
