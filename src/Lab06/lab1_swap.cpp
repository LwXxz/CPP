#include "lab1_swap.hpp"
#include <iostream>

void swapint(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    std::cout << " a = " << a << " b = " << b << std::endl;
}

void swapref(int& a, int& b){
    int c = a;
    a = b;
    b = c;
    std::cout << " a = " << a << " b = " << b << std::endl;
}

void swapptr(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
    std::cout << " a = " << *a << " b = " << *b << std::endl;
}