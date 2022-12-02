cmake_minimum_required( VERSION 3.10)

project(lab&project)

include_directories(./include/Lab01)

# Lab01
add_executable(lab01_1 ./src/Lab01/lab1.cpp)
add_executable(lab01_2 ./src/Lab01/lab2_main.cpp ./src/Lab01/lab2_add.cpp)
