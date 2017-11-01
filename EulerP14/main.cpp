#include<iostream>


using namespace std;

void sequence(unsigned long long int & n) { if(n % 2 == 0) { n = n/2; } else { n = 3*n+1; } }

int main() {

    int max = 0;
    int top = 0;

    for( int n = 0; n < 1000000; ++n) {

        int len = 0;
        unsigned long long int k  = n;

        while(k > 1) {

            sequence(k);
            ++len;

        }

        if(max <= len) {

            max = len;
            top = n;

        }

    }

    cout << top << endl;

    return 0;

}