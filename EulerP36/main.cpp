#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
using namespace std;

string binary(unsigned long long int);
bool is_palindrome(string);


int main() {

    int count = 0;

    for(unsigned long long int i = 1; i < 1000000; ++i) {

        string str;
        stringstream stream;
        stream << i;
        string bin = binary(i);
        str = stream.str();
        if(is_palindrome(str) && is_palindrome(bin)) {

            cout << str << '\t' << bin << endl;
            count += i;

        }

    }

    cout << count << endl;
    return 0;

}

string binary(unsigned long long int n) {

    string s = "";
    int power = 0;

    while(int(pow(2, power)) <= n) ++power;
    --power;

    while(power != -1) {

        if(n >= int(pow(2, power))) {

            n = n % int(pow(2, power));
            s += "1";

        }

        else s += "0";

        --power;

    }

    return s;

}

bool is_palindrome(string s) {

    bool ans = true;
    for(int i = 0; i < s.length()/2.0; ++i)
        if(s[i] != s[s.length()-1-i]) return false;

    return true;


}