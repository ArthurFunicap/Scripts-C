#include <stdio.h>

int main(){
    int x, contador = 0;

    scanf("%d", &x);

    while(contador < 6){
        contador += 1;

        if(x % 2 != 0){
            printf("%d\n", x);
            x += 2;
        } else {
            for(x += 1; contador < 7; x += 2){
                printf("%d\n", x);
                contador += 1;
            }
        }
    }
}