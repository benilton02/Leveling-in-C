#include<stdio.h>

void array_selection(){
    float my_array[100];
    unsigned short i;

    for(i = 0; i < 100; i++){
        scanf("%f", &my_array[i]);
    }

    for(i = 0; i < 100; i++){
        if(my_array[i] <= 10){
            printf("A[%hu] = %.1f\n", i, my_array[i]);
        }
    }
}

int main(){
    array_selection();
    return 0;
}