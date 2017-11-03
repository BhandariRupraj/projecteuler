#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int digit, number, sumOfPowers, power = 5, answer = 0;

    for (int i = 2; i < 295245; i++)
    {
        number = i;
        sumOfPowers = 0;

        do
        {
            digit = number % 10;
            number /= 10;

            sumOfPowers += int(pow(float(digit), power));
        } while (number > 0);

        if (i == sumOfPowers)
            answer += i;
    }

    cout << "Answer = " << answer << endl;
    return 0;
}