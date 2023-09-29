#include <stdio.h>

int main(){
    int numEntradas, x;
    int contador = 0;

    scanf("%d", &numEntradas);

    while(contador < numEntradas){
        contador += 1;
        scanf("%d", &x);

        if(x == 0){
            printf("NULL\n");
        } else{
            if(x > 0){
                if(x % 2 == 0){
                    printf("EVEN POSITIVE\n");
                } else{
                    printf("ODD POSITIVE\n");
                }
            }
            if(x < 0){
                if(x % 2 == 0){
                    printf("EVEN NEGATIVE\n");
                } else{
                    printf("ODD NEGATIVE\n");
                }
            }
        }
    }
}