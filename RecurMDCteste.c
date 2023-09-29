#include <stdio.h>

int main(){
    int mdc, num1, num2;
    int contador = 0;
    int div = 1;

    printf("Escreva dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    while(contador < 10){
        contador += 1;

        if(num1 % div == 0 && num2 % div == 0){
            mdc = div;
        }
        div += 1;
    }
    printf("O MDC de %d e %d eh: %d\n", num1, num2, mdc);
}