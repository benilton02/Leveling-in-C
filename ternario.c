#include<stdio.h>

void ternario(int x, int y){
    int less;
    x < y ? less = x : less = y; 
    printf("less ---> %d\n", less);
}


int main(void){
    ternario(57, 58);
    return 0;
}