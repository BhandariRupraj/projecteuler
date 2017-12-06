#include<iostream>

#define LIM 100+1

typedef long long lint;

int main()
{
    lint a[LIM][10];
    lint sum = 0;
    for(int i=0;i<10;i++)
        a[1][i] = 1;
    for(int i=2;i<LIM;i++)
        for(int j=0;j<10;j++){
            a[i][j]=0;
            for(int k=j;k<10;k++)
                a[i][j] += a[i-1][k];}
    for(int i=1;i<LIM;i++){
        sum -= a[i][0]+1;
        for(int j=0;j<10;j++)
            sum+=2*a[i][j];}
    std::cout<<sum-9*(LIM-1)<<std::endl;


}