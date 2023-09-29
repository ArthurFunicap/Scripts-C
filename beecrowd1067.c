#include <stdio.h>

int main(){
    int x, impar;

    scanf("%d", &x);

    for(impar = 0; impar <= x; impar++){
        if(impar % 2 == 1){
            printf("%d\n", impar);
        }
    }
}