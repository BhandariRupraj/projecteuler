#include <iostream>

using namespace std;

typedef unsigned long ulong;

bool IsBouncy (ulong num);


int main()
{
    ulong bouncyNumCnt = 0;
    ulong n;
    long double ratio = 0;

    for (n = 99; 100*bouncyNumCnt < 99*n; n++) {
        if (IsBouncy (n))
            bouncyNumCnt++;
    }

    cout << n;

    return 0;
}

bool IsBouncy (ulong num)
{
    int prevDigit, digit;
    bool increasing = false, decreasing = false;

    prevDigit = num%10;

    while(num /= 10) {
        digit = num%10;
        if (digit > prevDigit)
            decreasing = true;
        if (digit < prevDigit)
            increasing = true;
        if (increasing && decreasing)
            return true;
        else
            prevDigit = digit;
    }

    return false;
}
