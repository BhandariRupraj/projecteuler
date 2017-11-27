#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i < 100; i++)
    {
        double n = pow(10, 1.0 - 1.0 / i);
        int tmp = int(n);
        if (n - tmp>0.0)
            tmp++;
        if (tmp > 9)
            break;

        count += 9 - tmp + 1;

    }
    cout << count << endl;
    return 0;
} 