#include <stdio.h>

void fill_array_iii(){
    unsigned short i;
    double number, my_array[100];

    scanf("%lf", &number);
    for(i = 0; i < 100; i++){
        if (i == 0){
            my_array[i] = number;  
        }
        else{
            my_array[i] = my_array[i-1]/2;
        }
        printf("N[%d] = %.4lf\n", i, my_array[i]);
    }
}

int main(void){
    fill_array_iii();
    return 0;
}