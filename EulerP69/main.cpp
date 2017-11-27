#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned int uint;

int main() {
    const uint N = 1000000;
    double maxRatio = 0;
    int maxRatioNum;
    bool sieve[N + 1] = {false, false};
    double *invPhi = new double[N + 1];

    // find all the primes less then N using
    // the seive of Eratosthenes.
    for (uint i = 2; i <= N; i++)
        sieve[i] = true;

    uint max = (uint) sqrt(N);
    for (uint n = 2; n <= max; n++)
        for (uint m = n * n; m <= N; m += n)
            if (sieve[m])
                sieve[m] = false;

    // populate the inverse totient function vector
    for (uint n = 2; n <= N; n++)
        invPhi[n] = 1;

    for (uint n = 2; n <= N; n++) {
        if (sieve[n])
            for (uint m = 1; m * n <= N; m++)
                invPhi[m * n] *= 1. + 1. / (n - 1.);
    }

    for (uint n = 2; n <= N; n++) {
        if (invPhi[n] > maxRatio) {
            maxRatio = invPhi[n];
            maxRatioNum = n;
        }
    }

    delete (invPhi);
    cout << maxRatioNum;

return 0;
}
