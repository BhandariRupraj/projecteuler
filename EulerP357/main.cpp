#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

const ll N = 100000000;

ll ans, i, j, d;
bool flag;

int main() {
    vector<bool> prime(N+1, true);
    prime[0] = prime[1] = false;

    for (i=2; i*i<=N; i++)
        if (prime[i]) for (j=i*i; j<=N; j+=i) prime[j] = false;

    for (ans=0, i=1; i<=N; i++) {
        flag = true;
        for (d=1; d*d<=i; d++) {
            if ((i%d == 0) && (!prime[d+(i/d)])) {
                flag = false;
                break;
            }
        }

        if (flag) ans += i;
    }

    cout << "Answer : " << ans << endl;
    return 0;
}