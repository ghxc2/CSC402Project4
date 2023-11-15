cmake_minimum_required(VERSION 3.26)
project(CSC402Project4)

set(CMAKE_CXX_STANDARD 17)

add_executable(CSC402Project4 main.cpp
        Person.cpp
        Person.h
        Student.cpp
        Student.h
        Faculty.cpp
        Faculty.h
        TeachingAsst.cpp
        TeachingAsst.h)
