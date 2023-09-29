#include <stdio.h>

int main(){
    int contador = 0, positivo = 0;
    float valores, soma = 0, media;

    while(contador < 6){
        contador += 1;
        scanf("%f", &valores);

        if(valores > 0){
            positivo += 1;
            soma += valores;
        }
    }

    media = soma / positivo;

    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", media);
}