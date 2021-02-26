// Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. 
// A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor 
// e a sua posição dentro do vetor, mostrando esta informação.

// Entrada
// A primeira linha de entrada contem um único inteiro N (1 < N < 1000), 
// indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros.
//  A segunda linha contém cada um dos N valores, separados por um espaço.

// Saída
// A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e do menor valor lido na entrada. 
// A segunda linha apresenta a mensagem “Posicao:” seguido de um espaço e da posição do vetor
// na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.

#include <stdio.h>
#include <stdlib.h>

void position_of_smaller(void){
    int size, i, j, smaller, position;
    int *my_array;

    scanf("%d", &size);

    my_array = (int*) malloc(size * sizeof(int));
    
    if(my_array == NULL){
        printf("empty array\n");
    }

    for ( i = 0; i < size; i++){
        scanf("%d", &my_array[i]);
    }
    
    position = 0;
    smaller = my_array[position];
    for(i = 1; i < size; i++){
        if(my_array[i] < smaller){
            smaller = my_array[i];
            position = i;
        }
    }
    printf("Menor valor: %d\n", smaller);
    printf("Posicao: %d\n", position);
}

int main(void){
    position_of_smaller();
    return 0;
}