#include<stdio.h>

int main(void){
    struct horario{
        // definir uma estrutura. Esqueleto da estrutura, com os tipos de dados abaixo.
        // os dados podem ser double, char...
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora;
        // declaração de uma estrutura do tipo "horario" chamada "agora"

    agora.hora = 15; //alterar o valor de uma estrutura
    agora.minuto = 17; //alterar o valor de uma estrutura
    agora.segundo = 30; //alterar o valor de uma estrutura

    printf("hora ---> %d\n", agora.hora);
    printf("minuto ---> %d\n", agora.minuto)       ;
    printf("segundo ---> %d\n", agora.segundo);
}