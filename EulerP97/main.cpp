#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    unsigned long       i;
    unsigned long long  n = 2;

    for (i=0;i<7830456;i++) {
        n = (n << 1) % 10000000000;
    }

    n *= 28433;
    n += 1;

    n = n % 10000000000;

    printf("Result %lld\n", n);

    return 0;
}