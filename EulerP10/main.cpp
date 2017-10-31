
# include <conio.h>
# include <iostream>
# include <stdio.h>

using namespace std;

long long arr[2000000],i,j;
long long suma;

int main (){
    for(i=1; i<2000000;i++)
        arr[i]=0;
    i=2; arr[0]=1;
    arr[1]=1;
    while (i*i<2000000){
        j=i;
        while(i*j<2000000){
            arr[i*j]=1;
            j++;
        }
        i++;
        while(arr[i]==1)
            i++;
    }
    suma=0;
    for(i=1;i<=2000000;i++)
        if(arr[i]==0)
            suma=suma+i;
    i=0;
     cout <<suma<<endl;
    //getch();
    return 0;
}
