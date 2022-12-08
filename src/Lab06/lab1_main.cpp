#include <iostream>
#include "lab1_swap.hpp"

using namespace std;

int main(int argc, char** argv){
    int a = 2, b = 1;
    int& aref = a, bref = b;
    swapint(a, b);
    swapref(aref, bref);

    a = 2, b = 1;
    int* aptr = &a;
    int* bptr = &b;
    swapptr(aptr, bptr);
    return 0;
}