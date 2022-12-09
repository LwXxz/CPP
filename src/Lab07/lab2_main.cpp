#include <iostream>

template <typename T>
T abso(T x){
    return x < 0 ? -x : x;
}

template <typename T>
T vabs(T* p, int n){
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abso(p[i]);
    }
    return sum;
}

int vabs(int* p, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abso(p[i]);
    }
    return sum;
}

float vabs(float* p, int n){
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abso(p[i]);
    }
    return sum;
}

double vabs(double* p, int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abso(p[i]);
    }
    return sum;
}

int main(int argc, char** argv){
    int listInt[5] = {2, 3, -2, 1, 1};
    float listFoalt[5] = {2.0f, 3.0f, -2.0f, 1.0f, 1.0f};
    double listDouble[5] = {2., 3., -2., 1., 1.};

    int resInt = vabs(listInt, 5);
    float resFloat = vabs(listFoalt, 5);
    double resDouble = vabs(listDouble, 5);

    std::cout << resInt << std::endl;
    std::cout << resFloat << std::endl;
    std::cout << resDouble << std::endl;


    return 0;
}