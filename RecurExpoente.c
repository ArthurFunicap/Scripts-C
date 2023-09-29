#include <stdio.h>

int ex(int base, int expo){
    int cont = 0;

    if(expo == 0){
        return 1;
    }

    if(expo == 1){
        return base;
    }

    if(expo > 0){
        if(cont < expo){
            cont += 1;
            return base*ex(base, 1);
        }
    }

    if(expo < 0){
        expo = expo*(-1);
        if(cont < expo){
            return 1/(base*ex(base, 1));
        }
    }
    return 0;
}

int main(){
    int vBase, vExpo, r;

    printf("Digite o valor da base e do expoente, respectivamente: ");
    scanf("%d%d", &vBase, &vExpo);

    r = ex(vBase, vExpo);

    printf("\nO resultado eh: %d\n", r);
}