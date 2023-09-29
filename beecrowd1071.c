#include <stdio.h>

int main(){
    int x, y, somaImpar = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x < 0){
        while(x < y){
            if(x % 2 != 0)
                somaImpar += x;
            x++;
        }
    } else{
        if(y < 0){
            y++;
            while(y < x){
                if(y % 2 != 0)
                    somaImpar += y;
                y++;
            }
        } else{
            while(y < x){
                if(y % 2 != 0)
                    somaImpar += y;
                y++;
            }
        }
    }
    printf("%d\n", somaImpar);
}