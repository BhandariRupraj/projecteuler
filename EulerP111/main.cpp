#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

#define LL long long
using namespace std;
int n,d;
LL ans,tmp,T,sum;
int b[15];
bool check(LL x)
{
    for (int i=2;i<=(int)(sqrt(x));++i)	if (x%i==0)	return 0;
    return 1;
}
void dfs(int now,LL sum)
{
    if (now==n+1)
    {
        if (sum>=T&&check(sum))	tmp+=sum;
        return;
    }
    if (b[now])	sum=sum*10+d,dfs(now+1,sum);
    else
    {
        LL t;
        for (int i=0;i<=9;i++)	if (i!=d)	t=sum*10+i,dfs(now+1,t);
    }
}
int main()
{
    scanf("%d",&n);T=1;
    for (int i=1;i<n;++i)	T*=10;
    for (d=0;d<=9;d++)
    {
        ans=0;
        for (int i=0;i<=3;++i)
        {
            memset(b,0,sizeof(b));tmp=0;
            for (int j=n;j>i;--j)	b[j]=1;
            do	{	dfs(1,0);	}	while (next_permutation(b+1,b+n+1));
            if (tmp&&!ans)	ans=tmp;
        }
        sum+=ans;
    }
    cout<<sum<<endl;
    return 0;
}
