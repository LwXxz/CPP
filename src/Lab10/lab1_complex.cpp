#include "lab1_complex.hpp"
#include <iostream>

Complex Complex::operator+(const Complex& num1){
    Complex res;
    res.real = num1.real + this->real;
    res.image = num1.image + this->image;
    std::cout << res.real << std::endl;
    return res;
}

Complex Complex::operator-(const Complex& num1){
    Complex res;
    res.real = this->real - num1.real;
    res.image = this->image - num1.image;
    return res;
}

Complex Complex::operator*(const Complex& num1){
    Complex res;
    res.real = num1.real * this->real;
    res.image = num1.image * this->image;
    return res;
}

void Complex::operator=(const Complex& num){
    this->real = num.real;
    this->image = num.image;
}

void Complex::operator+=(const Complex &num){
    this->real += num.real;
    this->image += num.image;
}


std::ostream& operator<<(std::ostream & os, const Complex& num){
    if (num.image > 0) {
            os << num.real << "+" << num.image << "i";
        } else {
            os << num.real << num.image << "i";
        }
    return os;
}

