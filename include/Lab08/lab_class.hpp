#pragma once

class Complex
{
private:
    int real;
    int image;

public:
    Complex(){
        this->real = 0;
        this->image = 0;
    };
    Complex(float real, float image)
    {
        this->real = real;
        this->image = image;
    }

    static Complex add(Complex num1, Complex num2);
    static Complex sub(Complex num1, Complex num2);

    static void display(Complex num);
};
