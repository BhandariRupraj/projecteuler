#include <stdio.h>
#include <math.h>

int gcd(int a,int b){
    while( 1 )
    {
        a = a % b;
        if( a == 0 )
            return b;
        b = b % a;
        if( b == 0 )
            return a;
    }
}

char x[12000][12000];

int main() {
    int i, j;
    double lb = 1.0 / 3.0;
    double ub = 1.0 / 2.0;

    for (i = 0; i < 12000; i++) {
        for (j = 0; j < 12000; j++) {
            x[i][j] = 0;
        }
    }

    long long unsigned int n = 0;

    for (i = 1; i <= 12000; i++) {
        j = i / 3 - 1;
        double maxj = i / 2 + 1;
        for (j; j <= maxj; j++) {
            double frac = j / (i * 1.0);

            if (frac > lb && frac < ub) {
                //reduce the fraction
                int g = gcd(i,j);
                if (((int)(i/g) - 1) < 0 || ((int)(j/g) - 1) < 0)
                    printf("%d : %d ",(i / g) - 1, (j / g) - 1);
                if (g > 0)
                    x[(int)(i/g) - 1][(int)(j/g) - 1] = 1;
            }
        }
    }
    printf("ok!\n");

    for (i = 0; i < 12000; i++) {
        for (j = 0; j < 12000; j++) {
            if (x[i][j] == 1)
                n++;
        }
    }
    printf( "final: %llu\n", n);
    return 0;
}