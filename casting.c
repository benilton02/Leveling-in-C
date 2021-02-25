#include<stdio.h>

int main(void){
    int num = 4;
    int den = 3;
    float ratio;
    char symbol;

    ratio = (float)num/den; // converting the result to a flutuant point
    symbol = (char)num/den;

    printf("%.2f\n", ratio);
    printf("%c\n", symbol);
    
    return 0;
}