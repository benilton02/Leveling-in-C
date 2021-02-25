#include<stdio.h>

void perfect_number(){
    unsigned int case_test, i, j, input_case, sum_of_dividers;
    scanf("%d", &input_case);

    for(i = 0; i < input_case; i++){
        scanf("%d", &case_test);
        
        sum_of_dividers = 0;
        for(j = 1; j < case_test - 1; j++ ){
            if( case_test%j == 0 ){
                sum_of_dividers += j;
            }
        }
        sum_of_dividers == case_test ? printf("%d eh perfeito\n", case_test) : printf("%d nao eh perfeito\n", case_test);
    }
}

int main(void){
    perfect_number();
    return 0;
}