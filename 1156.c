#include <stdio.h>

void sequecia_s_ii (float num, int den, float sequence_sum){
    while (num <= 39){
        sequence_sum += num/den;
        num += 2;
        den *= 2;
    }
    printf("%.2f\n", sequence_sum);
}

int main(void){
    sequecia_s_ii(1, 1, 0);
    return 0;
}