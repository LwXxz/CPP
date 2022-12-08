#include <iostream>

using namespace std;

int main(int argc, char** argv){
    float* pNums = new float[5]{1.0, 2.0, 3.0, 4.0, 5.0};
    cout << *pNums << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *pNums + 4 - i << endl;
    }
    delete [] pNums;
    return 0;
}   