#include <iostream>
#include "lab1_fib.hpp"

using namespace std;

int main(int argc, char** argv){
    int times;
    do
    {
        cout << "please input a positive number: ";
        cin >> times;
    } while (times <= 0);
    Fibonacci(times);
    return 0;
}