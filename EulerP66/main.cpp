#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int i,j,k,N=1000,cnt=0,numerator,denomentor,ou;
    long double p0,p1,pn,q0,q1,qn,ans=0.0;
    vector<int>p;
    for(i=2;i<=N;i++)
    {

        p.clear();
        j=(int)sqrt(i);
        if(j*j==i)
            continue;
        numerator=j;;
        denomentor=1;
        denomentor=i-j*j;
        numerator=j;
        p.push_back((j+numerator)/denomentor);
        while(1)
        {
            if(denomentor==1)
                break;
            numerator=p[p.size()-1]*denomentor-numerator;
            denomentor=(i-numerator*numerator)/denomentor;
            if(denomentor!=1)
                p.push_back((j+numerator)/denomentor);
            else
                p.push_back(2*numerator);
        }

        p0=(long long )sqrtl(i);
        p1=(long double)p[0]*p0+1.0;
        q0=1LL,q1=(long double)p[0];

        for(j=1;j<p.size()-1;j++)
        {
            pn=(long double)p[j]*p1+p0;
            p0=p1;
            p1=pn;
            qn=(long double)p[j]*q1+q0;
            q0=q1,q1=qn;
        }
        if(p.size()%2!=0)
        {
            j=p.size()-1;
            pn=(long double)p[j]*p1+p0;
            p0=p1;
            p1=pn;
            qn=(long double)p[j]*q1+q0;
            q0=q1,q1=qn;
            for(j=0;j<p.size()-1;j++)
            {
                pn=(long double)p[j]*p1+p0;
                p0=p1;
                p1=pn;
                qn=(long double)p[j]*q1+q0;
                q0=q1,q1=qn;
            }
        }

        cout<<i<<"\t"<<pn<<"\t"<<qn<<"\n";
        if(ans<pn)
            ans=pn,ou=i;
    }
    cout<<"D:"<<ou<<"\n";;
}
