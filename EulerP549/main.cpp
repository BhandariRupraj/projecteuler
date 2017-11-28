#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

#define maxs 100000000
using namespace std;
bool prime[maxs + 1]; int ret[maxs + 1];
int calc(int x, int y) {
    for(int i = 1; i <= 100; i++) {
        int t = i, q = 1;
        while(t % y == 0) t /= y, q++;
        x -= q;
        if(x <= 0) return i;
    }
    return -1;
}
int main() {
    for(int i = 2; i <= maxs; i++) prime[i] = true;
    for(int i = 2; i * i <= maxs; i++) {
        if(prime[i]) {
            for(int j = i + i; j <= maxs; j += i) {
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i <= maxs; i++) {
        if(prime[i]) {
            for(int j = i; j <= maxs; j += i) {
                int r = 0, q = j;
                while(q % i == 0) q /= i, r++;
                int t = i * calc(r, i);
                ret[j] = max(ret[j], t);
            }
        }
    }
    long long res = 0;
    for(int i = 2; i <= maxs; i++) {
        res += ret[i];
    }
    cout<<res<<endl;
    return 0;
}