#include<stdio.h>


void sum_of_consecutive_odd(void){
   int x, y, n, j, sum_odd;
   int i = 0;
   
   scanf("%d", &n);
    while (i < n){
        scanf("%d %d", &x, &y);
        if(x%2 == 0){
            x += 1;
        }
        
        sum_odd = 0;
        for(j=0; j < y; j++){
            sum_odd += x;
            x += 2;
        }
    
        printf("%d\n", sum_odd);
        i++;
    }
}


int main(void){
    sum_of_consecutive_odd();
    return 0;
}