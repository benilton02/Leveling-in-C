#include<stdio.h>

int main(void){
    int i;
    char option[]  = "abc";
    struct test{
        int a = 100;
        int b = 200;
        int c = 300;
    };
    
    for(i = 0; i < 3; i++){
        printf("---> %c\n", test.option[i]);
    }

    return 0;
}