#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    int ways = 0;
    int coin_size = 200;

    int a, b, c, d, e, f, g;
    for (a = 0; a <= coin_size; a += 200)
        for (b = 0; b <= coin_size; b += 100)
            for (c = 0; c <= coin_size; c += 50)
                for (d = 0; d <= coin_size; d += 20)
                    for (e = 0; e <= coin_size; e += 10)
                        for (f = 0; f <= coin_size; f += 5)
                            for (g = 0; g <= coin_size; g += 2)
                                if (a+b+c+d+e+f+g <= 200)
                                    ways++;

    cout << "Ways to make change = "<< ways << "\n" << endl;

    return 0;
}