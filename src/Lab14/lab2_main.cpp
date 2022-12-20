#include <iostream>
#include <cassert>

using namespace std;

float calculateAverage(const float* num, const int count);

int main(int argc, char** argv){
    int count = 0;
    cout << "Please input number of sum: " << endl;
    cin >> count;
    float num[4];
    for(int i = 0; i < count; i++){
        cin >> num[i];
    }
    float res = calculateAverage(num, count);
    cout << "res: " << res << endl;
}

float calculateAverage(const float* num, const int count){
    float res = 0;
    for(int i = 0; i < count; i++){
        assert(num[i] >= 0 && num[i] <= 100);
        res += num[i];
    }
    return res / count;
}