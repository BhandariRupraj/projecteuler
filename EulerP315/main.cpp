#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define digits 8

using namespace std;

int main (void) {
    int i, j, k, n, copy, copy2, diff = 0, p;

    int plan[10] = {0b1011111,0b0000101,0b1110110,0b1110101,0b0101101,
                    0b1111001,0b1111011,0b1001101,0b1111111,0b1111101};

    int *Iprevious = (int*) malloc(digits * sizeof(int)),
            *Icurrent = (int*) malloc(digits * sizeof(int));
    int **previous = &Iprevious, **current = &Icurrent, **tmp;

    bool *prime = (bool*) malloc(4472 * sizeof(bool));
    bool *prime2 = (bool*) malloc(10000000 * sizeof(bool));
    memset(prime, true, sizeof(bool) * 4472);
    memset(prime2, true, sizeof(bool) * 10000000);

    for (i = 2; i <= 4463; ++i)
        if (prime[i]) {
            for (j = i*i; j < 4472; j += i)
                prime[j] = false;
            for (j = ((i <= 3162) ? ((10000000/i + 1)*i) : (i * i)) - 10000000; j < 10000000; j += i)
                prime2[j] = false;
        }

    for (p = 10000001; p < 20000000; ++p)
        if (prime2[p-10000000]) {
            memset(*previous, 0, sizeof(int) * digits);

            for (n = p;;) {
                copy = n;
                for (i = 0; copy != 0; ++i) {
                    for (k = 0; k < 7; ++k)
                        (*current)[i] = plan[copy % 10];
                    copy /= 10;
                }
                for (k = 0; k < i; ++k)
                    for (j = 0, copy = (*previous)[k] & (*current)[k]; j < 7; ++j, copy /= 2, copy2 /= 2)
                        if (copy % 2)
                            diff += 2;

                tmp = previous;
                previous = current;
                current = tmp;

                if (n < 10) break;
                copy = n;
                for (n = 0; copy != 0; copy /= 10)
                    n += copy % 10;
            }
        }

    printf("%d\n", diff);

    free(*previous);
    free(*current);
    free(prime);
    free(prime2);

    return 0;
}
