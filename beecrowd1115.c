#include <stdio.h>

int main(){
    int x, y;
    int z = 1;

    while(z == 1){
        scanf("%d %d", &x, &y);

        if(x == 0 || y == 0){
            break;
        }
        if(x > 0 && y > 00)
            printf("primeiro\n");
        else
        if(x < 0 && y > 0)
            printf("segundo\n");
        else
        if(x < 0 && y < 0)
            printf("terceiro\n");
        else
        if(x > 0 && y < 0)
            printf("quarto\n");
    }
}