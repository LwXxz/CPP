#pragma once
#include <iostream>
class Complex
{  
public:
    Complex()
    {
        this->real = 0;
        this->image = 0;
    }

    Complex(int real, int image)
    {
        this->real = real;
        this->image = image;
    }

    Complex operator+(const Complex &num1);
    Complex operator-(const Complex &num1);
    Complex operator*(const Complex &num1);
    void operator=(const Complex &num1);

    void operator+=(const Complex &num);

    friend std::ostream &operator<<(std::ostream &os, const Complex &num);

private:
    int real;
    int image;
};