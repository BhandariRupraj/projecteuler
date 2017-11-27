#include<iostream>
#include<set>

using namespace std;

set<int> Q;
set<int>::iterator it;
bool re(int x,int y,int z);
int getn(int n)
{
    for(int k=n+1;k<=2*n;k++)
    {
        if(re(k,k,n))   //num, sum, digit
            return k;
    }
}
bool re(int x,int y,int z)
{
    //cout<<x<<" "<<y<<" "<<z<<endl;
    if(y<z)
        return 0;
    if(x==1)
        return y==z;
    if(z==1)
        return x==y;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
      //      cout<<"  i="<<i<<endl;
            if(re(x/i,y-i,z-1))
                return 1;
        }

    }
    return 0;
}
int main()
{
    int n;
    long long s=0;
    for(int i=2;i<=12000;i++)
    {
        n=getn(i);
        Q.insert(n);
    }
    for(it=Q.begin();it!=Q.end();it++)
    {
        s+=*it;
    }
    cout<<s<<endl;
    return 0;
}