cmake_minimum_required( VERSION 3.10)

project(lab&project)

include_directories(./include/Lab01)

# Lab01
add_executable(lab01_1 ./src/Lab01/lab1.cpp)
add_executable(lab01_2 ./src/Lab01/lab2_main.cpp ./src/Lab01/lab2_add.cpp)

# Lab02
add_executable(lab02_1 ./src/Lab02/lab1.cpp)
add_executable(lab02_2 ./src/Lab02/lab2.cpp)
add_executable(lab02_3 ./src/Lab02/lab3.cpp)
add_executable(lab02_4 ./src/Lab02/lab4.cpp)
