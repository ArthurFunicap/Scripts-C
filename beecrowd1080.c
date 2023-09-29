#include <stdio.h>

int main(){
    int num, maior = 0, cont = 0, posic = 0;

    while(cont < 5){
        cont++;

        scanf("%d", &num);

        if(num > maior){
            maior = num;
            posic = cont + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posic-1);
}