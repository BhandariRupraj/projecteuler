#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const long N = 1000000000;

const double r5 = sqrt(5.0);
const double lgr = log10((1.0 + r5) / 2.0);
const double lr5 = log10(r5);

bool ispandigital(long v)
{
    int digits[10], d;

    memset(digits, 0, sizeof(digits));

    while(v) {
        d = v % 10;
        if(digits[d])
            return false;
        digits[d] = 1;
        v /= 10;
    }
    if(digits[0])
        return false;

    for(int i=1; i<10; i++)
        if(digits[i] == 0)
            return false;

    return true;
}

bool ispandigital2(long n) {
    int digits = 0b1111111110;

    while (n) {
        digits ^= 1 << (n % 10);
        n /= 10;
    }

    return !digits;
}

int main()
{
    long f1=1, f2=1, next, k=2;

    for(;;) {
        k++;
        next = (f1 + f2) % N;
        if(ispandigital2(next)) {
            double d = (double)k * lgr - lr5;
            long t = (long)pow(10.0, 8.0 + d - floor(d));

            if(ispandigital2(t)) {
                cout << k << endl;
                break;
            }
        }

        f1 = f2;
        f2 = next;
    }

    return 0;
}