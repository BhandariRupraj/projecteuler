#include<iostream>
#include<sstream>
#include<string>

using namespace std;

string IntToString(int);

int main()
{
    int digitCounter = 0, number = 1, product = 1;
    string concat = "";

    do
    {
        if(number < 10)
            digitCounter += 1;
        else if (number < 100)
            digitCounter += 2;
        else if (number < 1000)
            digitCounter += 3;
        else if (number < 10000)
            digitCounter += 4;
        else if (number < 100000)
            digitCounter += 5;
        else
            digitCounter += 6;
        number++;
    } while(digitCounter < 1000000);

    for (int i = 0; i <= number; i++)
        concat += IntToString(i);

    for (int i = 1; i <= 1000000; i *= 10)
        product *= int(concat[i] - '0');

    cout << "Answer = " << product << endl;

   // cin.get();
    return 0;
}
string IntToString(int n) {
    ostringstream text;
    text << n;
    return text.str();

}
