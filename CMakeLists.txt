cmake_minimum_required( VERSION 3.10)

project(lab&project)

# Lab01
include_directories(./include/Lab01)
add_executable(lab01_1 ./src/Lab01/lab1.cpp)
add_executable(lab01_2 ./src/Lab01/lab2_main.cpp ./src/Lab01/lab2_add.cpp)

# Lab02
add_executable(lab02_1 ./src/Lab02/lab1.cpp)
add_executable(lab02_2 ./src/Lab02/lab2.cpp)    
add_executable(lab02_3 ./src/Lab02/lab3.cpp)
add_executable(lab02_4 ./src/Lab02/lab4.cpp)

# Lab03
include_directories(./include/Lab03)
add_executable(lab03_1 ./src/Lab03/lab1_main.cpp ./src/Lab03/lab1_fib.cpp)
add_executable(lab03_2 ./src/Lab03/lab2_main.cpp ./src/Lab03/lab2_fac.cpp)

# Lab04
include_directories(./include/Lab04)
add_executable(lab04_1 ./src/Lab04/lab1_main.cpp ./src/Lab04/lab1_stu.cpp)
add_executable(lab04_2 ./src/Lab04/lab2_main.cpp ./src/Lab04/lab2_DayInfo.cpp)

# Lab05
add_executable(lab05_1 ./src/Lab05/lab1.cpp)
add_executable(lab05_2 ./src/Lab05/lab2.cpp)

# Lab06
include_directories(./include/Lab06)
add_executable(lab06_1 ./src/Lab06/lab1_main.cpp ./src/Lab06/lab1_swap.cpp)
add_executable(lab06_2 ./src/Lab06/lab2_main.cpp ./src/Lab06/lab2_match.cpp)
add_executable(lab06_3 ./src/Lab06/lab3_main.cpp)

# Lab07
include_directories(./include/Lab07)
add_executable(lab07_1 ./src/Lab07/lab1_main.cpp ./src/Lab07/lab1_displaySquare.cpp)
add_executable(lab07_2 ./src/Lab07/lab2_main.cpp)
add_executable(lab07_3 ./src/Lab07/lab3_main.cpp)

# Lab08
include_directories(./include/Lab08)
add_executable(lab08 ./src/Lab08/lab_main.cpp ./src/Lab08/lab_class.cpp)

#Lab10
include_directories(./include/Lab10)
add_executable(lab10 ./src/Lab10/lab1_main.cpp ./src/Lab10/lab1_complex.cpp)

# Lab11
add_executable(lab11 ./src/Lab11/main.cpp)

# Lab12
include_directories(./include/Lab12)
add_executable(lab12 ./src/Lab12/lab_main.cpp ./src/Lab12/stereo_graphic.cpp)

# Lab13
include_directories(./include/Lab13)
add_executable(lab13 ./src/Lab13/lab1_main.cpp ./src/Lab13/matrix.cpp)

# Lab14
add_executable(lab14_1 ./src/Lab14/lab1_main.cpp)
add_executable(lab14_2 ./src/Lab14/lab2_main.cpp)

# project
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(./include/deepNN)
add_executable(CNN ./src/deepNN/main.cpp)