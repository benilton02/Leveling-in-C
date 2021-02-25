#include<stdio.h>



void array_fill(){
    unsigned short my_array[10], i;
    
    scanf("%hu", &my_array[0]);
    for(i = 1; i < 10; i++){
        my_array[i] = my_array[i-1] * 2;
    }

    for(i = 0; i < 10; i++){
        printf("N[%hu] = %hu\n", i, my_array[i]);
    }
}

int main(void){
    array_fill();
    return 0;
}
