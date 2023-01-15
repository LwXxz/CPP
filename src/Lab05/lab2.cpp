#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;

// naive approach to see if num is a prime number
bool isPrime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; ++i)
        if (num % i == 0 and count > 1){
            return false;
        }else if (num % i == 0)
        {
            count += 1;
        }
    return true;
}

std::string printString(char* charArray){
    std::string res;
    for (auto i = 0;  i < 3; i++){
        res += (charArray[i]);
    }
    return res;
}

int main()
{
    int a = 23;
    cout << isPrime(a) << endl;

    char* input = new char[3] {'a', 'b', 'c'};
    std::string output = printString(input);
    delete [] input;
    cout << output << endl;
    return 0;
}
