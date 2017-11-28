#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,root;
    long long k,p,ans=0;
    const unsigned long long lim = pow(10,12);
    root = sqrt(lim)+1;

    for(n=2;n<=root;n++){
        k = n;
        p = n;
        while(true){
            p = p*n;
            k = k+p;
            if(k>=lim) break;
            if(k<lim) {
                ans += k+1;
            }
        }
    }
    ans++; // for '1'
    ans -= 31;
    ans -= 8191;
    cout<<endl<<ans<<endl<<endl;

    return 0;
}