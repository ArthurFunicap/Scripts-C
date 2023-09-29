#include <stdio.h>

int main(){
    int x, y, somador, cont = 0, numRep;

    scanf("%d", &numRep);

    while(cont < numRep){
        cont++;

        scanf("%d%d", &x, &y);

        somador = 0;

        if(x < 0){
            while(x < y){
                if(x % 2 != 0)
                    somador += x;
                x++;
            }
            printf("%d\n", somador);
        } else{
            if(y < 0){
                y++;
                while(y < x){
                    if(y % 2 != 0)
                        somador += y;
                    y++;   
                }
                printf("%d\n", somador);
            } else{
                if(y < x){
                    while(y < x){
                        if(y % 2 != 0)
                            somador += y;
                        y++;
                    }
                    printf("%d\n", somador);
                } else{
                    x++;
                    while(x < y){
                        if(x % 2 != 0)
                            somador += x;
                        x++;
                    }
                    printf("%d\n", somador);    
                }
            }
        }
    }
}