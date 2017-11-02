#include<iostream>
using namespace std;

int letters(int n);
int under_twenty(int n);
int double_digit(int n);
int over_one_hundred(int n);

int main() {

    unsigned long long int sum = 11;

    for(int i = 1; i < 1000; ++i)
        sum += letters(i);

    cout << sum << endl;

}

int letters (int n) {

    if(n <= 20)
        return under_twenty(n);
    if(n <= 99)
        return double_digit(n);
    else { return over_one_hundred(n); }


}

int under_twenty(int n) {

    switch(n) {

        case 0:
            return 0;
        case 1:
            return 3;
        case 2:
            return 3;
        case 3:
            return 5;
        case 4:
            return 4;
        case 5:
            return 4;
        case 6:
            return 3;
        case 7:
            return 5;
        case 8:
            return 5;
        case 9:
            return 4;
        case 10:
            return 3;
        case 11:
            return 6;
        case 12:
            return 6;
        case 13:
            return 8;
        case 14:
            return 8;
        case 15:
            return 7;
        case 16:
            return 7;
        case 17:
            return 9;
        case 18:
            return 8;
        case 19:
            return 8;
        case 20:
            return 6;

    }

}

int double_digit(int n) {

    int i = n/10;
    int k = n % 10;


    switch(i) {

        case 2:
            return 6 + under_twenty(k);
        case 3:
            return 6 + under_twenty(k);
        case 4:
            return 5 + under_twenty(k);
        case 5:
            return 5 + under_twenty(k);
        case 6:
            return 5 + under_twenty(k);
        case 7:
            return 7 + under_twenty(k);
        case 8:
            return 6 + under_twenty(k);
        case 9:
            return 6 + under_twenty(k);


    }

}

int over_one_hundred(int n) {

    int i = n/100;
    int k = under_twenty(i) + 10;
    if(n % 100 == 0)
        return k-3;


    if(n % 100 > 20)
        return k + double_digit(n % 100);
    else {
        return k + under_twenty(n % 100);

    }

}