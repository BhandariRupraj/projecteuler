#include <iostream>
#include <math.h>

using namespace std;

#define N 333333333

inline bool isInt(double d)
{
    return (long long)d == d;
}

int main()
{
    long long sum = 0;
    int pos = 1;
    for (long long i = 5; i <= N; i++) {
        double sq = sqrt(4.0*i*i - (i+pos)*(i+pos));
        if (isInt(sq)) {
            sum += 2*i + (i+pos);
            i = (long long)(0.9*4*i) - 3;
            pos = -pos;
        }
    }
    cout << sum << endl;
}