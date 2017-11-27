#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

#define sz 2767
#define mx 53

bool p[sz];
int primeTable[sz],nPrime = 0;

void sieve(){
    int i,j;

    p[0] = p[1] = true;
    for( i = 4; i <= sz; i += 2 )
        p[i] = true;

    primeTable[nPrime++] = 2;

    for( i = 3; i <= mx; i += 2 ){
        if(!p[i]){
            primeTable[nPrime++] = i;
            for( j = i * i; j <= sz; j += i )
                p[j] = true;
        }
    }

    for( i = mx + 2; i <= sz; i += 2 ){
        if(!p[i]){
            primeTable[nPrime++] = i;
        }
    }
}

bool isPrime(int n){
    for(int i = 0; i < nPrime; i++ )
        if( n % primeTable[i] == 0)
            return false;

    return true;
}

int main(){
    char num[] = "7654321"; //Largest 7 digit pandigital number

    sieve();
    if(isPrime(atoi(num)))
        //printf("%s\n",num);
        cout << num << endl;
    else{
        while(prev_permutation( num, num + 7 )){
            if(isPrime(atoi(num))){
                //printf("%s\n",num);
                cout << num << "\n" << endl;
                break;
            }
        }
    }

    return 0;
}