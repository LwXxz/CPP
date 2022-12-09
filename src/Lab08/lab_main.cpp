#include "lab_class.hpp"

int main(int argc, char** argv){
    Complex complex1 = Complex(3, 2);
    Complex complex2 = Complex(4, 5);
    
    Complex resAdd = Complex::add(complex1, complex2);
    Complex::display(resAdd);
    Complex resSub = Complex::sub(complex1, complex2);
    Complex::display(resSub);

    return 0;
}