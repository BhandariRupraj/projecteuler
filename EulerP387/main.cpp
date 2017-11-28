#include <iostream>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<=(n); i++)
#define LL long long

bool prime( LL x )
{
    if (x<2) return false;
    for (LL i=2; i*i<=x; i++)
        if (x%i==0)
            return false;
    return true;
}

LL n = (LL)(1000000000)*100000;
LL ans = 0;

void dfs( LL cur, int sum_of_d )
{
    if (cur*10 >= n) return;
    if (prime(cur/sum_of_d))
        FOR(a,0,9)
            if (prime(cur*10+a))
                ans += cur*10+a;
    FOR(a,0,9)
        if ( (cur*10+a)%(sum_of_d+a)==0 )
            dfs( cur*10+a, sum_of_d+a );
}

int main()
{
    FOR(a,1,9) dfs(a, a);
    cout << ans;

    return 0;
}