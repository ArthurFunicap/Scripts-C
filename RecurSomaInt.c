#include <stdio.h>

int somaD(int x){
    if(x > 0){
        return (x % 10) + somaD(x / 10);
    }
    return 0;
}

int main(){
    int num, r;

    printf("Digite um numero: ");
    scanf("%d", &num);

    r = somaD(num);

    printf("A soma eh: %d\n", r);
}