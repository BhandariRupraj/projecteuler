#include <stdio.h>
#include <iostream>

using namespace std;

inline unsigned long long reverse(unsigned long long n) {
    unsigned long long r = n % 10;

    while ((n /= 10) > 0) {
        r = 10*r + (n % 10);
    }

    return r;
}

int main(void) {
    int total = 0,i;

    for(i = 1; i < 10000; i++) {
        int it = 1;
        unsigned long long num = i, mun = reverse(i);

        do {
            num += mun;

            if (it++ > 24) {
                total++;
                break;
            }
        } while (num != (mun = reverse(num)));
    }


    cout << total << endl;

    return 0;
}