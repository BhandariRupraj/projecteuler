#include <iostream>
#include <vector>

using namespace std;

// Problem specific constants.
const int POWER = 500500;
const long long MODULO = 500500507;

// Return a vector of the first n primes.
vector<int> getNPrimes(int n)
{
    vector<bool> prime(15 * POWER, true);
    prime[0] = prime[1] = false;

    vector<int> ret;
    for (int p = 2;p < 15 * POWER && ret.size() < n; p++)
        if (prime[p]) {
            ret.push_back(p);
            for (int q = 2 * p;q < 15 * POWER; q += p)
                prime[q] = false;
        }

    return ret;
}

// For integers a > 1 and v > 0, return the smallest exponent e
// s.t a ^ e <= v.
int getMaxExponent(int a, int v)
{
    int ret = 0, tmp = 1;
    while (tmp <= v / a) {
        ret++;
        tmp = tmp * a;
    }

    return ret;
}

long long getPower(int a, int x)
{
    long long ret = 1;
    for (int i = 0;i < x; ++i)
        ret = ret * a;
    return ret;
}

long long get(int p, int X)
{
    long long ret = 1;
    for (int i = 1;i <= X; i++) {
        ret = ret * getPower(p, 1 << (i - 1)) % MODULO;
    }

    return ret;
}

int main(int argc, char *argv[])
{
    // Start with the default solution of 2^1 . 3^1 ... . 500500^1 and take
    // away as many large prime factors as possible.
    vector<int> p = getNPrimes(POWER);
    vector<int> X(POWER, 1);

    for (int i = POWER - 1;i >= 0; i--) {

        long long factorGone = p[i] + 1;
        int jj = -1;

        for (int j = 0;j < i; j++) {
            // p[j] ^ (2 ^ X[j] - 1) -> p[j] ^ (2 ^ (X[j] + 1) - 1)
            // result goes up by the factor p[j] ^ (2 ^ X[j])
            if (X[j] == 1 && p[j] * 1LL * p[j] >= p[i])
                break;

            int maxE = getMaxExponent(p[j], p[i]);
            if (X[j] > getMaxExponent(2, maxE))
                continue;

            long long factor = getPower(p[j], getPower(2, X[j]));
            if (factorGone > factor) {
                factorGone = factor;
                jj = j;
            }
        }

        if (factorGone > p[i] )
            break;
        X[jj]++;
        X[i]--;
    }

    long long ret = 1;
    for (int i = 0;i < POWER; ++i)
        ret = ret * get(p[i], X[i]) % MODULO;

    cout << ret << endl;

    return 0;
}