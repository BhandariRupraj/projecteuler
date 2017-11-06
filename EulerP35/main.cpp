#include <cstdio>
#include <iostream>

using namespace std;

#define sz 1000001
#define mx 1001

bool p[sz];
int primeTable[78500],nPrime = 0;

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

bool isCircularPrime(long n){
    long pow = 1,j;

    if( n < 10)
        return true;

    while( pow <= n )
        pow *= 10;
    pow /= 10;

    j = n ;
    while(1){
        j = (j%pow)*10 + j/pow;
        if(p[j])
            return false;
        if(j == n)
            break;
    }

    return true;
}


int main(){
    long i,cnt = 0;

    sieve();

    for( i = 0; i < nPrime; i++){
        if( isCircularPrime(primeTable[i]) )
            cnt++;
    }

    cout << "Number of circular primes bellow 1 million is " << cnt << endl;

    return 0;
}
