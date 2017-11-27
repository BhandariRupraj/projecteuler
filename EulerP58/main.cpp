#include <stdio.h>

int prime(int value)
{
    unsigned int divisor = 3;
    unsigned int square  = divisor * divisor;

    if (value == 0)   return 0;
    if (value == 2)   return 1;
    if (value == 3)   return 1;
    if (!(value & 1)) return 0;	/* even */

    while (square < value && value % divisor) {
        ++divisor;
        square += 4 * divisor;
        ++divisor;
    }

    return value % divisor != 0;
}

int main() {
    char solved = 0;
    long long unsigned int n = 3;
    int a = 2;
    int i = 0;
    long long unsigned int sidelength = 3;
    long long unsigned int x = 0;
    long long unsigned int t = 0;

    while (! solved) {
        if (prime(n)) {
            x++;
        }
        t++;
        i++;
        if ((x * 1.0 / t * 1.0) < .1)
            solved = 1;

        if (i == 4 && ! solved) {
            i = 0;
            a += 2;
            sidelength+=2;
        }
        n += a;
    }
    printf("%llu\n",sidelength);
}