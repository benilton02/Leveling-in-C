#include<stdio.h>

void replacement_array(){
    int i, my_array[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &my_array[i]);
        if(my_array[i] <= 0){
            my_array[i] = 1;
        }
    }

    for(i = 0; i < 10; i++){
        printf("x[%d] = %d\n", i, my_array[i]);
    }
}

int main(void){
    replacement_array();
    return 0;
}