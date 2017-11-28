#include<cstdio>
#define SIEVE 10000000

int D[SIEVE+1];
int P[SIEVE+1][2];
bool O[SIEVE+1];

void sieve(){
    D[0] = D[1] = 1;
    for(int i=2;i<=SIEVE/2;i++)
        if(D[i]==0)
            for(int j=2*i;j<=SIEVE;j+=i){
                if(D[j]==0)P[j][0]=i;
                if(D[j]==1)P[j][1]=i;
                D[j]++;
            }
}

int main(){
    sieve();
    long long sum = 0;
    for(int i=SIEVE;i>0;i--)
        if(D[i]==2)
            if(!O[P[i][0]*P[i][1]]){
                sum+=i;
                O[P[i][0]*P[i][1]]=true;
            }
    printf("%lld\n",sum);
    return 0;
}