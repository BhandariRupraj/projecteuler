#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

#define _ull unsigned long long

bool factorInList(const _ull int& n, const vector< _ull int >& v){
    for(vector< _ull int >::const_iterator i = v.begin(); (*i)*(*i)<=n; ++i){
        if(n%*i==0)
            return true;
    }
    return false;
}

bool isPrime(const _ull int& n){
    static vector< _ull int > primes(1,2);
    _ull int nn = *(primes.rbegin());
    if(n > nn * nn){
        for(_ull int i = nn; i<=n; ++i){
            if (!factorInList(i,primes)){
                primes.push_back(i);
                //cout << i << endl;
                if (i==n)
                    return true;
            }
        }
        return false;
    }
    return !factorInList(n,primes);
}

void nextPrime(_ull int& n){
    do{
        n += 2;
    }while(!isPrime(n));
}

bool primePermutations(const string& s, const vector< string >& v){
    for(vector< string >::const_iterator i = v.begin(); i != v.end(); ++i){
        if(!isPrime(stoull(s+*i)) || !isPrime(stoull(*i+s))){
            return false;
        }
    }
    return true;
}

_ull int sum(const vector< string >& v){
    _ull int n = 0;
    for(vector< string >::const_iterator i = v.begin(); i != v.end(); ++i){
        n += stoull(*i);
    }
    return n;
}

int main(int argc, char* argv[]){
    time_t t = clock();
    vector< _ull int > v(4);
    v.at(0) = 3;
    v.at(1) = 7;
    v.at(2) = 109;
    v.at(3) = 673;
    for(_ull int i = 677; ; i+=2){
        if(isPrime(i)){
            vector< _ull int > vv(v);
            vector< string > s2(2,to_string(i));
            for(_ull int j = vv.at(3); j < i; nextPrime(j)){
                s2.at(1) = to_string(j);
                if(primePermutations(*(s2.rbegin()),vector< string >(s2.rbegin()+1,s2.rend()))){
                    vector< string > s3(s2);
                    s3.push_back("");
                    for(_ull int k = vv.at(2); k < j; nextPrime(k)){
                        s3.at(2) = to_string(k);
                        if(primePermutations(*(s3.rbegin()),vector< string >(s3.rbegin()+1,s3.rend()))){
                            vector< string > s4(s3);
                            s4.push_back("");
                            for(_ull int ii = vv.at(1); ii < k; nextPrime(ii)){
                                s4.at(3) = to_string(ii);
                                if(primePermutations(*(s4.rbegin()),vector< string >(s4.rbegin()+1,s4.rend()))){
                                    vector< string > s(s4);
                                    s.push_back("");
                                    for(_ull int jj = vv.at(0); jj < ii; nextPrime(jj)){
                                        s.at(4) = to_string(jj);
                                        if(primePermutations(*(s.rbegin()),vector< string >(s.rbegin()+1,s.rend()))){
                                            cout << sum(s) << endl;
                                            cout << (clock() - t)/(double)CLOCKS_PER_SEC << "s" << endl;
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
