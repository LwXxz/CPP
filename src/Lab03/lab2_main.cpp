#include <iostream>
#include "lab2_fac.hpp"

int main(int argc, char** argv){
    int nums;
    do
    {
        std::cout << "please input a positive number: ";
        std::cin >> nums;
    } while (nums <= 0);
    int res = Factorials(nums);
    return 0;
}
