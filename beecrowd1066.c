#include <stdio.h>

int main(){
    int x, cont = 0, par = 0, impar = 0, neg = 0, pos = 0;

    while(cont < 5){
        cont += 1;

        scanf("%d", &x);

        if(x < 0)
            neg += 1;
        if(x > 0)
            pos += 1;
        
        if(x % 2 == 0)
            par += 1;
        else
            impar += 1;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);
}