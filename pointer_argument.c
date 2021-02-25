#include <stdio.h>

void cube_by_reference(int *my_pointer){
    *my_pointer = *my_pointer * *my_pointer * *my_pointer; // calcular o cubo de n (n³)
    printf("\n\n %d \n\n\n", *my_pointer); 
}

int main(void){
    int n = 2;
    cube_by_reference(&n);
    return 0;
}