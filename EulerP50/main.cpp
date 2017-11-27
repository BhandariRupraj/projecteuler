#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> primes(1000000,true);
    primes[0]=false;
    primes[1]=false;
    for (int n=4;n<1000000;n+=2)
        primes[n]=false;
    for (int n=3;n<1000000;n+=2){
        if (primes[n]==true){
            for (int b=n*2;b<1000000;b+=n)
                primes[b]=false;
        }
    }
    int basicmax,basiccount=1,currentcount,biggermax,biggercount=1,sum=0,basicstart,basicend,biggerstart,biggerend;
    int limit=1000000;
    for (int start=2;start<limit;start++){

        sum=0;
        currentcount=0;
        for (int basic=start;start<limit&&sum+basic<limit;basic++){
            if (primes[basic]==true){

                sum+=basic;currentcount++;}
            if (primes[sum]&&currentcount>basiccount&&sum<limit)
            {basicmax=sum;basiccount=currentcount;basicstart=start;basicend=basic;}

        }
        if (basiccount>biggercount)
        {biggercount=basiccount;biggermax=basicmax;biggerend=basicend;biggerstart=basicstart;}
    }
    cout<<biggercount<<"\n"<<biggermax<<endl;
    return 0;
}