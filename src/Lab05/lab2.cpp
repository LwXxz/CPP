#include <iostream>
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

int main()
{
    int a = 23;
    cout << isPrime(a) << endl;
    return 0;
}
