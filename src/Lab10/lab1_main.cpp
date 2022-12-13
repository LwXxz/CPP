#include "lab1_complex.hpp"

int main(int argc, char** argv){
    Complex num1(2, 3);
    Complex num2(10, 28);

    std::cout << num1 << std::endl;

    Complex res;
    res = num1 + num2;
    std::cout << res << std::endl;

    res = num1 - num2;
    std::cout << res << std::endl;

    res = num1 * num2;
    std::cout << res << std::endl;

    res = num1;
    std::cout << res << std::endl;

    res += num1;
    std::cout << res << std::endl;

}