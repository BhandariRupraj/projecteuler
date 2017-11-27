#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("C:/Users/s521059/CLionProjects/Euler Project/EulerP99/p099_base_exp.txt");
    cin.rdbuf(in.rdbuf());

    int result = 0;
    double maxValue = 0;
    string sample = "";
    int base, exponent;
    for (int i = 0; i < 1000; i++)
    {
        getline(cin, sample);
        sscanf(sample.c_str(), "%d,%d", &base, &exponent);
        double temp = exponent*log10(base);
        if (temp > maxValue)
        {
            maxValue = temp;
            result = i + 1;
        }
    }
    cout << result << endl;

    return 0;
}