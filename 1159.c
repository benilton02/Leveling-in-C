#include<stdio.h>
#define True 1


void sum_of_consecutive_even(){
    int x, i, sum_of_even;
    while (True){
        scanf("%d", &x);
        if (x == 0){
            break;
        }
        
        else if (x%2 == 1){
            x += 1;
        }

        sum_of_even = 0;
        for(i = 0; i < 5; i++){
            sum_of_even += x;
            x += 2;
        }
        printf("%d\n", sum_of_even);
    }
    
}

int main(void){
    sum_of_consecutive_even();
    return 0;
}