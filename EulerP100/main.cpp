#include <iostream>

using namespace std;

long long f(long long v) {
    long long b, n, t;

    //Init
    b = 15;
    n = 21;

    while(n < v) {
        t = (2 * n) + (3 * b) - 2;
        n = (3 * n) + (4 * b) - 3;
        b = t;
    }

    return b;
}

int main() {
    cout << "Result:" << f(1000000000000) << endl;

    return 0;
}