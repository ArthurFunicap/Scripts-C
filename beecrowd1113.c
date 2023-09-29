#include <stdio.h>

int main(){
    int x, y;
    int z = 1;

    while(z == 1){
        scanf("%d %d", &x, &y);

        if(x == y){
            break;
        }

        if(x > y){
            printf("Decrescente\n");
        } else{
            printf("Crescente\n");
        }
    }
}