#include<stdio.h>
#define limit 1000000

int gcd(int a,int b){int tmp;
    if(a<b){tmp=a;a=b;b=tmp;}
    while(b){tmp=a%b;a=b;b=tmp;}return a;
}

int main(){
    unsigned long long n_max=0,d_max=1,n,d;

    for(d=2;d<=limit;d++){if(d%7){goto label;}continue;label:;

        n=(3*d)/7;
        if(n*d_max>n_max*d){d_max=d;n_max=n;}

    }
    printf("%llu/%llu\n",n_max/gcd(n_max,d_max),d_max/gcd(n_max,d_max));
    return 0;
}