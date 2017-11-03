#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    double a1[10] = {0}, a2[10] = {0};
    double ceiling = 1;//if n >= ceiling dig(n) > 100
    for(int i = 0; i<100;i++){
        ceiling*=10;
    }

    a1[0] = 1;
    a2[0] = 1;
    int top = 0;
    int index = 2;
    while(a2[9]<ceiling){
        int carry = 0;
        for(int i=0;i<=top;i++){
            double temp = a2[i];
            a2[i] = a1[i] + a2[i];
            a2[i] +=carry;
            a1[i] = temp;
            if(a2[i]>=ceiling)carry = 1;
            else carry = 0;
        }
        if(carry == 1){
            top++;
            a2[top] = 1;
        }
        index++;
    }
    printf("%d",index - 1);

    return 0;
}