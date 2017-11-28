#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c;
    ll count=0;
    for(int i=1;i<=(1<<30);i++)
    {
        a=i;
        b=2*i;
        c=3*i;
        ll res=a ^ b^ c;
        if(res==0)count++;
    }
    cout<<count<<endl;
    return 0;
}