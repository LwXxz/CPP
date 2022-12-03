#include "lab1_fib.hpp"
#include "iostream"

void Fibonacci(const int &times)
{
    int res = 1, temp = 0;
    std::cout << res << "  ";
    for (int i = 1; i < times; i++)
    {
        temp = res - temp;
        std::cout << res << "  ";
        res += temp;
        if (i % 10 == 0){
            std::cout << std::endl;
        }
    }
    std::cout << '\n' << std::endl;
}