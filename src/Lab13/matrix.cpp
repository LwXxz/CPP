#include "matrix.hpp"
#include <iostream>

using namespace std;

template<typename T>
inline Matrix<T>::Matrix(int rows, int cols, T data){
    this->rows = rows;
    this->cols = cols;
    this->data = new T[rows * cols];

    for(int i = 0; i < rows * cols; i++){
        this->data[i] = data;
    }
}

template<typename T>
inline Matrix<T>::Matrix(const Matrix& other){
    this->rows = other.rows;
    this->cols = other.cols;
    this->data = other.data;
}

template<typename T>
inline Matrix<T>::~Matrix(){
    delete [] this->data;
}

template<typename T>
inline Matrix<T>& Matrix<T>::operator=(const Matrix<T>& other){
    this->rows = other.rows;
    this->cols = other.cols;
    this->data = other.data;
    return *this;    
}

template<typename T>
inline T* Matrix<T>::operator[](int i){
    if (i > this->rows)
    {
        cout << "Index error: array index out of bound." << endl;
        exit(EXIT_FAILURE);
    }
    return this->data + i * this->cols;
}

template <typename T>
T& Matrix<T>::operator()(int i, int j){
    if (i > this->rows - 1 || j > this->cols - 1) {
        cout << "Index error: array index out of bound." << endl;
        exit(EXIT_FAILURE);
    }

    return this->data[i * this->cols + j];
}

template<typename T>
Matrix<T>& Matrix<T>::operator+(const Matrix& other){
    if (this->rows != other.rows && this->cols != other.cols)
    {
        cout << "array dont have same shape!!!" << endl;
        exit(EXIT_FAILURE);
    }
    
    for(int i = 0; i < this->rows * this-> cols; i++){
        this->data[i] += other.data[i];
    }
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator+=(const Matrix& other){
    *this = *this + other;
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator-(const Matrix& other){
    if (this->rows != other.rows && this->cols != other.cols)
    {
        cout << "array dont have same shape!!!" << endl;
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < this->rows * this-> cols; i++){
        this->data[i] -= other.data[i];
    }
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator-=(const Matrix& other){
    *this = *this - other;
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator*(const T num){
    for(int i = 0; i < this->rows * this-> cols; i++){
        this->data[i] *= num;
    }
    return *this;
}

template<typename T>
Matrix<T>& Matrix<T>::operator*(Matrix& other){
    if (this->rows != other.rows && this->cols != other.cols)
    {
        cout << "array dont have same shape!!!" << endl;
        exit(EXIT_FAILURE);
    }
    Matrix<T> res(this->rows, other.cols, 0); 
    for(int i = 0; i < this->rows; i++){
        for(int j = 0; j < this->cols; j++){
            for(int k = 0; k < other.cols; k++){
                res[i][k] += *(this)[i][j] * other[j][k];
            }
        }
    }
    return res;
}

template<typename T>
void Matrix<T>::print(){
    for(int i = 0; i < this->rows * this->cols; i++){
        cout << this->data[i] << " ";
        
    }
    cout << endl;
}