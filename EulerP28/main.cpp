// What is the sum of both diagonals in a 1001 by 1001 spiral?

#include<iostream>
using namespace std;

int main() {

    int sum = 1;
    int num = 1;
    int jump = 2;
    int i = 1;

    while(jump - 1 != 1001) {

        for(int n = 0; n < 4; ++n) {
            num += jump;
            sum += num;

        }

        jump += 2;
        ++i;

    }

    std::cout << sum << '\n';

    return 0;

}