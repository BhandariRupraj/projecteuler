#include<iostream>

using namespace std;

int gcd(int, int);
bool digit_match(int, int);
int * naive_division(int, int);

int main(int argc, char * argv[]) {

    int num[4];
    int den[4];
    int numprod = 1;
    int denprod = 1;

    for(int i = 10; i < 100; ++i)
        for(int j = i+1; j < 100; ++j) {
            if(j % 10 == 0 && i % 10 == 0) continue;
            if(!digit_match(i, j)) continue;
            int * frac = naive_division(i,j);
            int num = frac[0];
            int den = frac[1];
            if(i/gcd(i,j) == num/gcd(num,den) && j/gcd(i,j) == den/gcd(num, den)) {numprod *= i/gcd(i,j); denprod *= j/gcd(i,j);}

        }

    cout << denprod/gcd(numprod, denprod) << endl;

    return 0;

}

int gcd(int m, int n) {

    int max;
    int min;

    if(m == n) return m;

    if(m > n) { max = m; min = n; }
    else { max = n; min = m; }

    while(min != 0) {

        int k = min;
        min = max % min;
        max = k;

    }

    return max;

}

bool digit_match(int m, int n) {

    int m_first = m/10;
    int n_first = n/10;
    int m_second = m % 10;
    int n_second = n % 10;

    if(m_first == n_second && m_second == n_first) return false;
    if(m_first == n_second || m_first == n_first || m_second == n_first || n_second == m_second) return true;
    return false;

}

int * naive_division(int m, int n) {


    int frac[2];
    int * pointer = frac;
    int m_first = m/10;
    int n_first = n/10;
    int m_second = m % 10;
    int n_second = n % 10;

    if(m_first == n_second) {

        frac[0] = m_second;
        frac[1] = n_first;

    }

    if(m_second == n_second) {

        frac[0] = m_first;
        frac[1] = n_first;

    }

    if(m_first == n_first) {

        frac[0] = m_second;
        frac[1] = n_second;

    }

    if(m_second == n_first) {

        frac[0] = m_first;
        frac[1] = n_second;

    }

    return pointer;

}