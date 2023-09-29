#include <stdio.h>

int main(){
    int contador = 0;
    int numEntradas;
    float n1, n2, n3, media;

    scanf("%d", &numEntradas);

    while(contador < numEntradas){
        contador += 1;

        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1*2 + n2*3 + n3*5)/ 10.0;

        printf("%.1f\n", media);
    }
}