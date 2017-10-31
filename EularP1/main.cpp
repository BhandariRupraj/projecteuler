#include <iostream>
using namespace std;

int main()
{
    int answer = 0;
    for (int i = 0; i < 1000; i++){
        if ((i%3 == 0) || (i%5 == 0)) {answer += i;}
    }
    cout << endl << "The sum of multiple of 3 and 5 is: " << answer << endl;
    return 0;
}