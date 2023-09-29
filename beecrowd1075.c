#include <stdio.h>

int main(){
    int num, resto = 1;

    scanf("%d", &num);

    while(resto < 10000){
        if(resto % num == 2)
            printf("%d\n", resto);
        
        resto += 1;
    }
}