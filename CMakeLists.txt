cmake_minimum_required(VERSION 3.26)
project(otus_cpp_basic_03homework)

set(CMAKE_CXX_STANDARD 17)

add_executable(guess_the_number
        main.cpp
        high_scores.h
        high_scores.cpp)
