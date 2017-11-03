// Sum all the amicable pairs up to 10000.

#include<iostream>
#include<map>

using namespace std;

int main() {

    map <unsigned int, unsigned long long int> d;

    for(int i = 2; i < 10000; ++i) {
        unsigned long long int sum = 1;
        int j = 2;
        for(j = 2; j*j < i; ++j) { if(i % j == 0) sum += (j + i/j); }
        if(j*j == i) sum += j;

        d[i] = sum;

    }

    int sum = 0;

    for(unsigned int i = 2; i < 10000; i++) { if(i == d[d[i]] && i != d[i]) { sum += i; cout << i << '\t' << d[i] << endl; } }
    cout << sum << endl;

    return 0;

}