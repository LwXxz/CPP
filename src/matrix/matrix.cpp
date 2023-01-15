#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>

#define USE_DOUBLE 1

#if USE_DOUBLE
    #define TYPE_DATA double
    #define PRECISION 8
#else
    #define TYPE_DATA float 
    #define PRECISION 4
#endif
using namespace std;

typedef vector<vector<TYPE_DATA>> matrix;

matrix read_matrix(const char* file_name){
    ifstream in(file_name);
    if (!in.is_open())
    {
        cout << "cant open the file" << endl;
    }
    matrix m;
    TYPE_DATA temp;
    int i = 0, j = 0;
    m.push_back(vector<TYPE_DATA>());
    while (in >> temp)
    {
        m[i].push_back(temp);
        if (in.get() == '\n' && in.peek() != EOF)
        {
            m.push_back(vector<TYPE_DATA>());
            i++;
            j = 0;
        }
        
    }
    in.close();
    return m;
}

void print_matrix(matrix m, const char* file_name){
    ofstream out(file_name);
    out.precision(PRECISION);
    if (!out.is_open())
    {
        cout << "cant open the file" << endl;
    }
    
    for (int i = 0; i < m.size(); i++){
        for (int j = 0; j < m[0].size(); j++){
            out << m[i][j] << " ";
        }
        out << endl;
    }
    out.close();
}

void print_matrix(matrix m){
    for (int i = 0; i < m.size(); i++){
        for (int j = 0; j < m[0].size(); j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

matrix multiply_matrix(matrix& m1, matrix& m2){
    if (m1[0].size() != m2.size())
    {
        cerr << __FILE__ << ": " << __FUNCTION__ << " at line " << __LINE__ << ": "
             << "Multiplication error: matrix dimension cannot match." << endl;
        exit(EXIT_FAILURE);
    }

    matrix res(m1.size(), vector<TYPE_DATA>(m2[0].size(), 0));
    for(int i = 0; i < m1.size(); i++){
        for(int k = 0; k < m2.size(); k++){
            for (int j = 0; j < m2[0].size(); j++){
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return res;
}

matrix add(matrix& m1, matrix& m2){
    if (m1[0].size() != m2[0].size() || m1.size() != m2.size())
    {
        cerr << __FILE__ << ": " << __FUNCTION__ << " at line " << __LINE__ << ": "
             << "Multiplication error: matrix dimension cannot match." << endl;
        exit(EXIT_FAILURE);
    }
    matrix res(m1.size(), vector<TYPE_DATA>(m1[0].size(), 0));

    for (int i = 0; i < m1.size(); i++)
        for (int j = 0; j < m1[0].size(); j++) {
            res[i][j] = m1[i][j] + m2[i][j];
        }

    return res;
}

matrix sub(matrix& m1, matrix& m2){
    if (m1[0].size() != m2[0].size() || m1.size() != m2.size())
    {
        cerr << __FILE__ << ": " << __FUNCTION__ << " at line " << __LINE__ << ": "
             << "Multiplication error: matrix dimension cannot match." << endl;
        exit(EXIT_FAILURE);
    }
    matrix res(m1.size(), vector<TYPE_DATA>(m1[0].size(), 0));

    for (int i = 0; i < m1.size(); i++)
        for (int j = 0; j < m1[0].size(); j++) {
            res[i][j] = m1[i][j] - m2[i][j];
        }
    return res;
}

matrix slice_matrix(matrix& m1, int row_start, int row_end, int col_start, int col_end){
    matrix res;
    for(int i = row_start; i < row_end; i++){
        res.push_back(vector<TYPE_DATA>(m1[i].begin() + col_start, m1[i].begin() + col_end));
    }
    return res;
}

matrix merge_matrix(matrix& m1, matrix& m2, matrix& m3, matrix& m4){
    matrix res;
    for(int i = 0; i < m1.size(); i++){
        m1[i].insert(m1[i].end(), m2[i].begin(), m2[i].end());
    }
    for(int i = 0; i < m3.size(); i++){
        m3[i].insert(m3[i].end(), m4[i].begin(), m4[i].end());
    }
    res.insert(res.end(), m1.begin(), m1.end());
    res.insert(res.end(), m3.begin(), m4.end());
    return res;
}

matrix strassen(matrix A, matrix B) {
    if (A.size() != B.size() || A[0].size() != B[0].size()) {
        cout << "Strassen multiplication error: matrix dimension cannot match."
             << endl;
        exit(EXIT_FAILURE);
    }

    int N = A.size();

    if ((N & (N - 1)) != 0) {
        cout << "Strassen multiplication error: matrix dimension is not 2^n."
             << endl;
        exit(EXIT_FAILURE);
    }

    matrix A11 = slice_matrix(A, 0, N / 2, 0, N / 2);
    matrix A12 = slice_matrix(A, 0, N / 2, N / 2, N);
    matrix A21 = slice_matrix(A, N / 2, N, 0, N / 2);
    matrix A22 = slice_matrix(A, N / 2, N, N / 2, N);

    matrix B11 = slice_matrix(B, 0, N / 2, 0, N / 2);
    matrix B12 = slice_matrix(B, 0, N / 2, N / 2, N);
    matrix B21 = slice_matrix(B, N / 2, N, 0, N / 2);
    matrix B22 = slice_matrix(B, N / 2, N, N / 2, N);

    matrix S1 = sub(B12, B22);
    matrix S2 = add(A11, A12);
    matrix S3 = add(A21, A22);
    matrix S4 = sub(B21, B11);
    matrix S5 = add(A11, A22);
    matrix S6 = add(B11, B22);
    matrix S7 = sub(A12, A22);
    matrix S8 = add(B21, B22);
    matrix S9 = sub(A11, A21);
    matrix S10 = add(B11, B12);

    matrix P1 = strassen(A11, S1);
    matrix P2 = strassen(S2, B22);
    matrix P3 = strassen(S3, B11);
    matrix P4 = strassen(A22, S4);
    matrix P5 = strassen(S5, S6);
    matrix P6 = strassen(S7, S8);
    matrix P7 = strassen(S9, S10);

    matrix C11 = add(P5, P4);
    C11 = sub(C11, P2);
    C11 = add(C11, P6);
    matrix C12 = add(P1, P2);
    matrix C21 = add(P3, P4);
    matrix C22 = add(P5, P1);
    C22 = sub(C22, P3);
    C22 = sub(C22, P7);

    matrix C = merge_matrix(C11, C12, C21, C22);

    return C;
}

int main(int argc, char const *argv[]) {
    if (argc != 4) {
        cout << "Wrong number of arguments." << endl;
        exit(EXIT_FAILURE);
    }
    double start, end;

    start = clock();

    matrix m1 = read_matrix(argv[1]);
    matrix m2 = read_matrix(argv[2]);

    end = clock();
    cout << "Read file time: " << (end - start) / (double)1000 << "s" << endl;

    // print_matrix(add(m1, m2)); 

    start = clock();

    matrix res;
    if ((m1.size() & (m1.size()-1)) == 0 && m1.size() == m1[0].size() &&
        (m2.size() & (m2.size()-1)) == 0 && m2.size() == m2[0].size() &&
        m1.size() == m2.size()
    ) {
        cout << "Using Strassen algorithm." << endl;
        res = strassen(m1, m2);
    } else {
        cout << "Using for-loop multiplication." << endl;
        res = multiply_matrix(m1, m2);
    }

    end = clock();
    cout << "Multiplication time: " << (end - start) / (double)1000 << "s" << endl;

    print_matrix(res, argv[3]);

    return 0;
}