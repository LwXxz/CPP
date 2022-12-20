#include <iostream>

using namespace std;

class Matrix{
private:
    int rows;    // 4
    int cols;    // 4
    float* data; // 8
    int* count;  // 8

public:
    Matrix(int rows, int cols, float data){
        this->rows = rows;
        this->cols = cols;
        this->data = new float[rows * cols];
        this->count = new int(1);

        for (int i = 0; i < rows * cols; i++)
        {
            this->data[i] = data;
        }
    };

    Matrix(const Matrix& other){
        this->rows = other.rows;
        this->cols = other.cols;
        this->data = other.data;
        this->count = other.count;
        *(this->count) += 1;
    }

    ~Matrix(){
        *(this->count) -= 1;
        if ((*(this->count) == 0) and this->data != nullptr)
        {       
            delete [] this->data;
            delete this->count;
        }
    }

    Matrix& operator=(const Matrix& other){
        this->rows = other.rows;
        this->cols = other.cols;
        
        *(this->count) -= 1;
        if ((*(this->count) == 0) && this->data != nullptr){
            delete [] this->data;
            delete this->count;
        }

        this->data = other.data;
        this->count = other.count;
        return *this;    
    }

    float* operator[](int i) {
        if (i > this->rows) {
            cout << "Index error: array index out of bound." << endl;
            exit(EXIT_FAILURE);
        }
        return this->data + i * this->cols;
    }

    Matrix operator+(Matrix& other){
        // if (other.rows != this->rows or other.cols != this->cols){
        //     cout << "Add error: these two matrixs have different shape" << endl;
        //     exit(EXIT_FAILURE);
        // }
        Matrix res(other.rows, other.cols, 0);
        for (int i = 0; i < other.rows * other.cols; i++)
        {
            res.data[i] = this->data[i] + other.data[i];
        }
        return res;
    }

    // Matrix operator*(Matrix& other){
    //     if (this->cols != other.rows){
    //         cout << "Add error: these two matrixs have different shape" << endl;
    //         exit(EXIT_FAILURE);
    //     }
    //     Matrix res(this->rows, other.cols, 0);
    //     for (int i = 0; i < this->rows; i++)
    //     {
    //         for (int j = 0; i < this->cols; j++)
    //         {
                    // TODO
    //         }
            
    //     }
        
    // }

    Matrix operator*(int n){
        Matrix res(this->rows, this->cols, 0);
        for (int i = 0; i < res.rows * res.cols; i++)
        {
            res.data[i] = n * this->data[i];
        }
        return res;
    }

    void print(){
        for (int i = 0; i < this->rows; i++)
        {
            for (int j = 0; j < this->cols; j++){
                cout << this->data[i * this->rows + j] << " ";
            }
            cout << endl;
        }   
        cout << count << endl;
    }
};

int main(int argc, char** argv){
    cout << sizeof(int*) << endl;
    Matrix a(3, 4, 0.5f);
    a.print();
    Matrix b(3, 4, 3.0f);
    b.print();
    Matrix c = a + b;
    Matrix d = a * 2.0f;

    c.print();
    cout << endl;
    d.print();
    return 0;
}
