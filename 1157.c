#include <stdio.h>

void divisores_i(){
    int n, i = 1;
    scanf("%d", &n);

    while (i<=n){
        if (n%i == 0){
            printf("%d\n", i);
        }
        i++;
    }
}

int main(){ 
    divisores_i();
    return 0;
}