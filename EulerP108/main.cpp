#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int uint;

void PrimeFactrz(vector<uint> &primeFactsPow, uint num);

int main()
{
    const uint N = 1000;
    vector<uint> primeFactsPow;
    uint numOfSol = 0,
            k;

    for (k = 2; numOfSol <= N; k++) {
        PrimeFactrz(primeFactsPow, k);
        numOfSol = 1;
        for (uint m = 0; m < primeFactsPow.size(); m++)
            numOfSol *= ((primeFactsPow[m]<<1) + 1);
        numOfSol = (numOfSol+1)>>1;
        primeFactsPow.clear();
    }

    cout << --k;
    return 0;

}

void PrimeFactrz (vector<uint> &primeFactsPow, uint num)
{
    if (!(num & 1))
        primeFactsPow.push_back(0);
    while (!(num & 1)) {
        primeFactsPow[primeFactsPow.size()-1]++;
        num >>= 1;
    }

    for (uint k = 3; num > 1; k += 2) {
        if (!(num%k))
            primeFactsPow.push_back(0);
        while (!(num%k)) {
            primeFactsPow[primeFactsPow.size()-1]++;
            num /= k;
        }
    }
}