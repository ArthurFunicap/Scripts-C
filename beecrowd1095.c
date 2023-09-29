#include <stdio.h>

int main(){
    int i = 1;
    int j = 60;
    int contador = 0;

    while(contador < 13){
        contador += 1;
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }
}