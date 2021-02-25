#include <stdio.h>

int main(void){
    char letter;
    char number;
    letter = getchar();

    if (letter == 'a'){
        number = getchar();
    }
    
    number = getchar();
    printf("-- > %c\n", letter);
    printf("---> %c\n", number);
    return 0;
