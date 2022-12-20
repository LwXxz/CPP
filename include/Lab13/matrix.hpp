#pragma once

template <typename T>
class Matrix{
private:
    int rows;
    int cols;
    T* data;

public:
    Matrix(int rows, int cols, T data);
    Matrix(const Matrix& other);
    ~Matrix(); 
    
    Matrix<T>& operator=(const Matrix<T>& other);
    
    T* operator[](int i);
    T& operator()(int i, int j);

    Matrix<T>& operator+(const Matrix& other);
    Matrix<T>& operator+=(const Matrix& other);
    Matrix<T>& operator-(const Matrix& other);
    Matrix<T>& operator-=(const Matrix& other);
    Matrix<T>& operator*(Matrix& other);
    Matrix<T>& operator*(const T num);

    void print();
};