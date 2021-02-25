#include <stdio.h>


void multiplo_de_13(int x, int y){
    int i = 0;
    
    while (x <= y){
        if (x%13 != 0){
             i += x;
        }
        x++;
    }
    printf("%d\n", i);
}

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    multiplo_de_13(x, y);

    return 0;
}