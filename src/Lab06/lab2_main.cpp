#include "lab2_match.hpp"
#include <iostream>

int main(int argc, char** argv){
    char* pstr = "asdf";
    char ch = 'w';
    char* res = match(pstr, ch);
    std::cout << "res = " << &res + 1 << std::endl;
}