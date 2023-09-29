#include <stdio.h>

int main(){
    int num, quad, x = 2;

    scanf("%d", &num);

    while(x <= num){
        quad = x * x;
        printf("%d^2 = %d\n", x, quad);
        x += 2;
    }
}