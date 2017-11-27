#include <stdio.h>

#define N 80

int main() {
    FILE * f = fopen("C:/Users/s521059/CLionProjects/Euler Project/EulerP82/p082_matrix.txt", "r");
    unsigned long matrix[N][N], costs[N][N];
    int row, col, flag;
    unsigned long max = -1;

    for(row = 0; row < N; ++row) {
        for(col = 0; col < N; ++col)
            fscanf(f, "%lu,", &matrix[row][col]);
        fscanf(f, "\n");
    }

    for(row = 0; row < N; ++row)
        costs[row][0] = matrix[row][0];

    for(col = 1; col < N; ++col,flag=1) {
        for(row = 0; row < N; ++row)
            costs[row][col] = costs[row][col-1] + matrix[row][col];
        while(flag) {
            flag = 0;
            for(row = 0; row < N; ++row) {
                if((row > 0) && costs[row-1][col] + matrix[row][col] < costs[row][col])
                    flag = costs[row][col] = costs[row-1][col] + matrix[row][col];
                if((row < N-1) && costs[row+1][col] + matrix[row][col] < costs[row][col])
                    flag = costs[row][col] = costs[row+1][col] + matrix[row][col];
            }
        }
    }

    for(row = 0; row < N; ++row)
        if(costs[row][N-1] < max)
            max = costs[row][N-1];

    printf("Result: %lu\n", max);

    return 0;
}