#include <iostream>
#include "lab1_stu.hpp"

using namespace std;

int main(int argc, char** argv){
    int n = 3;
    stuinfo stu[n];
    inputstu(stu, n);
    showstu(stu, n);
    sortstu(stu, n);
    char ch;
    if (findstu(stu, n, &ch)){
        cout << "Find out " << ch << endl;
    }else{
        cout << "Can not Find out " << ch << endl;
    }

}