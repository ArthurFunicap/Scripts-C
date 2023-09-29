#include <stdio.h>

int main(){
    int valores, pares = 0, contador = 0;

    while(contador < 5){
        contador += 1;

        scanf("%d", &valores);

        if(valores % 2 == 0){
            pares += 1;
        }
    }
    printf("%d valores pares\n", pares);
}