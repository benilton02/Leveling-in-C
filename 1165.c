#include<stdio.h>


void prime_number(){
    unsigned int i, j, case_test, number, controller;
    scanf("%d", &case_test);
    
    for(i = 0; i < case_test; i++){
        scanf("%d", &number);
        
        controller = 0;
        for(j = 2; j < number; j++){
            if ( number % j == 0){
                printf("%d nao eh primo\n", number);
                controller++;
                break;                    
            }
        }
        if (controller == 0){
            printf("%d eh primo\n", number);
        }
    }
}

int main(void){
    prime_number();
    return 0;
}