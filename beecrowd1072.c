#include <stdio.h>

int main(){
    int qntd, cont = 0, x, in = 0, out = 0;

    scanf("%d", &qntd);

    while(cont < qntd){
        cont += 1;

        scanf("%d", &x);

        if(x >= 10 && x < 20)
            in += 1;
        else
            out += 1;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
}