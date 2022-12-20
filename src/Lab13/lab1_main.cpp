#include "matrix.cpp"
#include "matrix.hpp"

int main(int argc, char** argv){
    Matrix<float> a(3, 4, 0.5f);
    Matrix<float> b(3, 4, 3.0f);
    Matrix<float> c = a + b;
    a += b;
    Matrix<float> d(4, 3, 1.0f);

    c.print();
    cout << endl;
    cout << a(2, 3) << endl;
    (a * d).print();
    return 0;
}