#include <stdio.h>

int main(){
    int n1, n2, n3, n4, soma;

    printf("Informe quatro numeros, em sequencia: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("Resultado da soma: %d\n", soma);
}