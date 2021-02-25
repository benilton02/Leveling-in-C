/*Function that receives array as argument*/

#include<stdio.h>

int main(void){
    int vetor[10] = {9,8,7,6,5,4,3,2,1,0};
    int i;

    void ordemCrescente(int vetor[], int);
    ordemCrescente(vetor, 10);
    
    for(i = 0; i < 10; i++){
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}

void ordemCrescente(int vetor[], int n){
    int i, j, tmp;
    for(i = 0; i < n; i++){
        for(j = i+1; j<n; j++){
            if (vetor[i]>vetor[j]){
                tmp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = tmp;
            }        
        }
    }
}