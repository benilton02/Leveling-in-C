#include <stdio.h>

void array_fill_ii(void){
    unsigned short my_array[1000], i, t, j;

    j = 0;
    scanf("%hu", &t);
    for(i = 0; i < 1000; i++){
        if(j > t-1){
            j = 0;
        }
        my_array[i] = j;
        j++;
        printf("N[%hu] = %hu\n", i, my_array[i]);
    }
}

int main(void){
    array_fill_ii();
    return 0;
}