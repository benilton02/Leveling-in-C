#include<stdio.h>

void array_invert(void){
    unsigned short i, j;
    float aux, my_array[20];
    
    for(i = 0; i < 20; i++){
        scanf("%f", &my_array[i]);
    }

    j = 20;
    for(i = 0; i < 10; i++){
        aux = my_array[i];
        my_array[i] = my_array[j-1];
        my_array[j-1] = aux;
        j--;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %.0f\n", i, my_array[i]);
    }
}

int main(void){
    array_invert();
    return 0;
}