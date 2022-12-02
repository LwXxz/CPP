#include "lab2_add.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int num1 = 21417;
    int num2 = 1;
    int result = 0;
    result = add(num1, num2);
    cout << "The result is " << result << endl;
    return 0;

}