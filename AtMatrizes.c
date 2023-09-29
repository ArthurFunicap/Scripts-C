#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

int main(){
    int tipoMatriz;

    printf("\n");
    printf("Digite o numero da matriz voce quer: \n");
    printf("\n");
    printf("1) Matriz Nula\n");
    printf("2) Matriz Quadrada aleatoria 3x3 de -99 ate 99\n");
    printf("3) Matriz Quadrada 3x3 de 1 ate 9\n");
    printf("4) Matriz Identidade Quadrada 3x3\n");
    printf("\n");

    printf("Digite o numero: ");
    scanf("%d", &tipoMatriz);
    printf("\n");

    if(tipoMatriz == 1)
        matNULA();
    else if(tipoMatriz == 2)
        matQA();
    else if(tipoMatriz == 3)
        matQ();
    else if(tipoMatriz == 4)
        matI();
    else
        printf("O numero que voce digitou e invalido!\n");
    
    printf("\n");
}