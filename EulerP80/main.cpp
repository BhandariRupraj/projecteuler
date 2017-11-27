#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstring>

char a[128], b[128], s5[2], s10[3];

void mul(char*, int);
void add(char*, char*);
void sub(char*, char*);
int cmp(char*, char*);

void init(char *p, int n, int len) {
    memset(p, 0, len);
    for (; n; n /= 10)
        *p++ = n % 10 + '0';
}

char* b_sqrt(int n) {
    init(a, 5*n - 5, 128);
    init(b, 15, 128);

    do {
        if (cmp(a, b) >= 0) {
            sub(a, b);
            add(b, s10);
        }
        else {
            mul(a, 100);
            memcpy(&b[2], &b[1], strlen(b) - 1);
            memcpy(&b, "50", 2);
        }

    } while (strlen(b) < 102);

    return b;
}

int main() {
    init(s5, 5, 2);
    init(s10, 10, 3);

    int i, sum = 0;
    double r;
    char *p;

    for (i = 1; i <= 100; ++i) {
        r = sqrt(i);
        if (r != floor(r)) {

            p = b_sqrt(i) + 2;
            do sum += *p - '0'; while (*++p);
        }
    }

    printf("%d\n", sum);
}

void mul(char *a, int n) {
    int c = 0;
    for (; *a; ++a) {
        c += (*a - '0') * n;
        *a = c % 10 + '0';
        c /= 10;
    }
    for (; c; c /= 10, ++a)
        *a = c % 10 + '0';
}

void add(char *a, char *b) {
    int c = 0;
    for (; *b; ++b, ++a) {
        c += *a + *b - ('0' << 1);
        *a = c % 10 + '0';
        c /= 10;
    }
    for (; c; c /= 10, ++a) {
        if (*a) *a -= '0';
        c += *a;
        *a = c % 10 + '0';
    }
}

void sub(char *a, char *b) {
    int c = 0;
    for (; *b; ++b, ++a) {
        if (c) {
            --*a;
            c = 0;
        }
        if (*b > *a) {
            *a += 10;
            c = 1;
        }
        *a = *a - *b + '0';
    }
    for (; c && *a; ++a) {
        *a -= '0';
        if (*a) {
            *a = (*a == 1 ? 0 : *a - 1 + '0');
            c = 0;
        }
        else
            *a = '9';
    }
}

int cmp(char *a, char *b) {
    int la = strlen(a);
    int lb = strlen(b);
    if (la == lb) {

        int i;
        for (i = la-1; i >= 0; --i)
            if (a[i] != b[i])
                return a[i] > b[i] ? 1 : -1;

        return 0;
    }
    return la > lb ? 1 : -1;
}