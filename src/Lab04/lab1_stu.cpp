#include "lab1_stu.hpp"
#include <iostream>
#include<algorithm>  // sort()

using namespace std;

void inputstu(stuinfo stu[] , int n){
    cout << "Please input information of "<< "n" <<" stu: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "student " << i << " name: ";
        cin >> stu[i].name;
        cout << endl;
        cout << "student " << i << " scores: ";
        cin >> stu[i].score[0] >> stu[i].score[1] >> stu[i].score[2];
        cout << endl;

        stu[i].avg = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}

void showstu(stuinfo stu[] , int n){
    cout << "the information: " << endl;
    for (int i = 0; i < n; i++){
        cout << "student name: " << stu[i].name << "--student scores: " << stu[i].score[0] << " " << stu[i].score[1] << " " << stu[i].score[2] << endl;
    }
}

bool cmp(stuinfo stu1, stuinfo stu2) { return stu1.avg > stu2.avg; }

void sortstu(stuinfo stu[] , int n){
    cout << "The decending order of the students:" << endl;
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << "Student " << i << "\'s name: " << stu[i].name
             << ", scores: " << stu[i].score[0] << " " << stu[i].score[1] << " "
             << stu[i].score[2] << ", average: " << stu[i].avg << endl;
    }
}

bool findstu(stuinfo stu[] , int n, char ch[]){
    cout << "Input the name you want to find: " << endl;
    cin >> ch;
    for (int i = 0; i < n; i++){
        if (stu[i].name == ch){
            return true;
        }
    }
    return false;
}