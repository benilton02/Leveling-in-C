#include<stdio.h>


void population_growth(){
    int t, i, year, pa, pb;
    float ta, tb;
    scanf("%d", &t);

    for(i = 0; i < t; i++){
        scanf("%d %d %f %f", &pa, &pb, &ta, &tb);

        year = 0;
        while (pa <= pb && year < 101){
            pa += (int)(pa * ta)/100;
            pb += (int)(pb * tb)/100;
            year ++;
        }
        year > 100 ? printf("Mais de 1 seculo.\n") : printf("%d anos.\n", year);
    }   
}


int main(void){
    population_growth();
    return 0;
}