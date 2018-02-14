cmake_minimum_required(VERSION 3.9)
project(cpp_lessons)

set(CMAKE_CXX_STANDARD 17)

set(CPP_LESSONS_SOURCES
        cpp_lessons/lesson1.h
        cpp_lessons/lesson2.h
        cpp_lessons/lesson3.h
        cpp_lessons/lesson4.h
        cpp_lessons/lesson5.h
        cpp_lessons/lesson6.h
        cpp_lessons/lesson7.h
        cpp_lessons/lesson8.h
        cpp_lessons/lesson9.h
        cpp_lessons/lesson10.h
        cpp_lessons/lesson11.h
        cpp_lessons/lesson12.h
        cpp_lessons/lesson13.h
        cpp_lessons/lesson14.h
        cpp_lessons/lesson15.h
        cpp_lessons/lesson16.h
        cpp_lessons/lesson17.h
        cpp_lessons/lesson18.h
        cpp_lessons/lesson19.h
        cpp_lessons/lesson20.h
        cpp_lessons/lesson21.h
        cpp_lessons/lesson22.h
        cpp_lessons/lesson23.h
        cpp_lessons/lesson24.h
        cpp_lessons/lesson25.h
        cpp_lessons/lesson26.h
        cpp_lessons/lesson27.h
        cpp_lessons/lesson28.h
        cpp_lessons/lesson29.h
        cpp_lessons/lesson30.h
        cpp_lessons/lesson31.h
        cpp_lessons/lesson33.h
        cpp_lessons/lesson32.h
        cpp_lessons/lesson34.h)

include_directories(cpp_lessons)

add_executable(lessons main.cpp ${CPP_LESSONS_SOURCES})