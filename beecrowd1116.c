#include <stdio.h>

int main(){
    int numEntradas;
    float media, x, y;
    int contador = 0;

    scanf("%d", &numEntradas);

    while(contador < numEntradas){
        contador += 1;
        scanf("%f %f", &x, &y);

        if(y == 0)
            printf("divisao impossivel\n");
        else
        if(x == 0)
            printf("0.0\n");
        else
        if(x != 0 && y != 0){
            media = (float) x / y;

            printf("%.1f\n", media);
        }
    }
}