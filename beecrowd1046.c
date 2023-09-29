#include <stdio.h>

int main(){
    int x, y, r;
    
    scanf("%d%d", &x, &y);
    
    if(x == y)
        r = 24;
    else if(x < y)
        r = (x - y) * (-1);
    else if(x > y){
        r = x - y;
        r = 24 - r;
    }
    printf("O JOGO DUROU %d HORA(S)\n", r);
}