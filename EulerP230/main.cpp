#include <string>
#include <iostream>
#include <time.h>

#define LEN 100
#define SIZE 80

using namespace std;
typedef long long int lint;

lint L[SIZE];

lint ipow(lint x, lint n)
{
    lint i, ret = 1;
    for (i = 0; i < n; i++)
        ret *= x;
    return ret;
}

lint f(lint n) {
    return ipow(7, n) * (19 * n + 127);
}

char D(string A, string B, lint n, lint* L) {

    lint k = 1;
    while (L[k] < n) k++;

    while (L[0] < n) {
        if (L[k - 2] < n) {
            n = n - L[k - 2];
            k--;
        }
        else
            k -= 2;
    }

    if (k % 2 == 0) return A[n - 1];
    else          return B[n - 1];
}

void PE0230() {

    string A("1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679");
    string B("8214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196");

    L[0] = L[1] = LEN;
    for (lint i = 2; i < SIZE; i++)
        L[i] = L[i - 1] + L[i - 2];

    for (lint i = 17; i >= 0; i--)
        cout << D(A, B, f(i), L);
    cout << endl;
}

int main()
{

    clock_t start, end;
    start = clock();

    PE0230();

    end = clock();
    printf("%d msec.\n", end - start);

    return 0;
}