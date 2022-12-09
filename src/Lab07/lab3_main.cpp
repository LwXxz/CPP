#include <iostream>

using namespace std;

template <typename T>
T minimum (T pt1, T pt2){
    return pt1 < pt2 ? pt1 : pt2;
}

int main(int argc, char** argv){
    int numInt1 = 2, numInt2 = 3;
    float numFloat1 = 2.0f, numFloat2 = 3.0f;
    char char1 = 'a', char2 = 'b';

    int resInt = minimum(numInt1, numInt2);
    float resFloat = minimum(numFloat1, numFloat2);
    char resChar = minimum(char1, char2);

    cout << "resInt = " << resInt << " resFloat = " << resFloat << " resChar = " << resChar << endl;
}