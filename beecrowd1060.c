#include <stdio.h>

int main(){
    int contador = 0, positivo = 0;
    float valores;

    while(contador < 6){
        contador += 1;
        scanf("%f", &valores);

        if(valores > 0){
            positivo += 1;
        }
    }

    printf("%d valores positivos\n", positivo);
}