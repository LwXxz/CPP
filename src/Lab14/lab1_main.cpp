#include <iostream>
#include <string>

using namespace std;

class InputDontMatchError{
private:
    int pos;
    float value;
public:
    InputDontMatchError(int pos, float value){
        this->pos = pos;
        this->value = value;
    }
    void info(){
        cout << "The parameter " << this->pos << " is " << this->value << "which not in [0, 100]" << endl;
    }
};

float calculateAverage(const float* num){
    float temp = 0;
    for (int i = 0; i < 4; i++){
        if (num[i] < 0 || num[i] > 100)
        {
            throw InputDontMatchError(i + 1, num[i]);
        }else{
            temp += num[i];
        }
    }
    return temp / 4;
}

int main(int argc, char** argv){
    bool flag = true, success = false;
    float data[4];
    string choice;
    float avg = 0; 
    while (flag)
    {
        cout << "Please enter marks for 4 numbers: ";
        for (int i = 0; i < 4; i++){
            cin >> data[i];
        }
        try{
            avg = calculateAverage(data);
            success = true;
        }
        catch(InputDontMatchError& e){
            e.info();
            success = false;
        }
        if (success)
        {
            cout << "result is " << avg << endl;
        }   
        cout << "Would you want to enter another marks for 4 courses(y/n)? ";
        cin >> choice;
        if (choice != "y")
        {
            break;
        } 
    }
    cout << "Bye, see you next time!" << endl;
}