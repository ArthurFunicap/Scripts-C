#include <stdio.h>

int mdc(int x, int y){

    if(y == 0){
        return x;
    } else{
        return mdc(y, x % y);
    }
    return 0;
}

int main(){
    int num1, num2, r;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    r = mdc(num1, num2);

    printf("O MDC de %d e %d eh: %d\n", num1, num2, r);
}