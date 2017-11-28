#include<iostream>
#include<vector>

using namespace std;

bool isPrime[100000001];
vector<int> primes;
void sieve()
{
    for (int i = 2; i <= 100000000; i++) isPrime[i] = 1;
    for (int i = 2; i <= 10000; i++) if (isPrime[i])
            for (int j = i*i; j <= 100000000; j += i) isPrime[j] = 0;
    for (int i = 2; i <= 100000000; i++) if (isPrime[i]) primes.push_back(i);
}
pair<int, int> inv(int n, int m)
{
    if (m == 0) return make_pair(1, 0);
    pair<int, int> tmp = inv(m, n%m);
    return make_pair(tmp.second, tmp.first - (n/m)*tmp.second);
}
int main()
{
    sieve();
    long long int ans = 0;
    for (int i = 2; i < primes.size(); i++)
        ans += (long long int)((primes[i]-(3*inv(8, primes[i]).first)%primes[i])%primes[i]);
    cout << ans << endl;
}