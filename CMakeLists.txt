cmake_minimum_required(VERSION 3.17)
project(learning-C C)

set(CMAKE_C_STANDARD 11)

add_executable(
        learning-C
        day2/Game/game.c
        day2/Game/game.h
        day2/Game/test.c
        demo_1/test.c demo_1/test4.c)
