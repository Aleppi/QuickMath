cmake_minimum_required(VERSION 3.7)
project(QuickMath)

set(CMAKE_CXX_STANDARD 11)

add_executable(QuickMath.out
        main.cpp
        config.h
        Math/operators.h
        Math/exponent.cpp
        Math/exponent.h
        Pascal/pascal.cpp
        Pascal/pascal.h
        Factorial/factorial.cpp
        Factorial/factorial.h
        LinAlg/vector.cpp
        LinAlg/vector.h
        LinAlg/matrix.cpp
        LinAlg/matrix.h
        Trig/trigFunctions.cpp
        Trig/trigFunctions.h
        Combi/combi.cpp
        Combi/combi.h)
