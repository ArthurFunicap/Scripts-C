#include <stdio.h>

int fat(int x){
    if(x == 0){
        return 1;
    }
    return x*fat(x-1);
}

int main(){
    int num, resultado;

    printf("Digite um numero inteiro positivo para obter seu fatorial: ");
    scanf("%d", &num);

    resultado = fat(num);

    printf("\nO fatorial eh: %d\n", resultado);
}