#include "lab_class.hpp"
#include <iostream>

using namespace std;

Complex Complex::add(Complex num1, Complex num2){
    Complex resNum(num1.real + num2.real, num1.image + num2.image);
    return resNum;
}

Complex Complex::sub(Complex num1, Complex num2){
    Complex resNum(num1.real - num2.real, num1.image - num2.image);
    return resNum;
}

void Complex::display(Complex num){
    cout << "real = " << num.real << " image = " << num.image << endl;
}