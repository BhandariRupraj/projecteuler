#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

const int MAX = 1000000;
const int CONSECUTIVE_NUM = 8;

bool sieve[MAX];
int prime[MAX];
int len = 0;

void createSieve() {
    int i;
    memset(sieve, true, MAX);
    sieve[0] = sieve[1] = false;
    for (i = 0; i < sqrt(MAX); ++i) {
        while (i < sqrt(MAX) && !sieve[i])
            ++i;

        prime[len++] = i;

        int j = 2 * i;
        while (j < MAX) {
            sieve[j] = false;
            j += i;
        }
    }

    while (i < MAX) {
        if (sieve[i])
            prime[len++] = i;
        ++i;
    }
}


bool isPrime(int a) {
    if (a < MAX)
        return sieve[a];

    int i, j;
    for (i = 0; i < len && prime[i] <= sqrt(a); ++i)
        if (a % prime[i] == 0)
            return false;

    return true;
}

int replace_digit(int n, int org, int rep) {
    int ret = 0, tmp, mul = 1;
    bool replaced = false;

    while (n > 0) {
        tmp = n % 10;
        n /= 10;

        if (tmp == org) {
            replaced = true;
            ret += rep * mul;
        } else
            ret += tmp * mul;

        mul *= 10;
    }

    if (replaced)
        return ret;
    else
        return 0;
}

int main() {
    createSieve();

    int i = 0, j, count, tmp, digit;

    while (i < len) {

        tmp = prime[i];

        while (tmp > 0) {
            digit = tmp % 10;
            tmp /= 10;

            count = 1;
            j = 1;
            while (j < 10) {
                if (digit != j && isPrime(replace_digit(prime[i], digit, j)))
                    ++count;
                ++j;
            }

            if (count == CONSECUTIVE_NUM) {
                cout << "Result is:" << prime[i] << endl;
                return 0;
            }

        }
        ++i;
    }

    return 0;
}