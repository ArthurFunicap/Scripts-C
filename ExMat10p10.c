#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int mat[10][10];
    int l, c, nNulo = 0;
    int intervalo, min = 0, max = 1;
    
    intervalo = max - min + 1;

    for(l = 0; l < 10; l++){
        for(c = 0; c < 10; c++){
            mat[l][c] = (rand() % intervalo) + min;
        }
    }

    printf("Matriz:\n");
    for(l = 0; l < 10; l++){
        for(c = 0; c < 10; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Valores nao nulos (linha, coluna e valor):\n\n");

    for(l = 0; l < 10; l++){
        for(c = 0; c < 10; c++){
            if(mat[l][c] > 0){
                printf("%d %d %d\n", l, c, mat[l][c]);
                nNulo += 1;
            }
        }
    }

    printf("\n");
    printf("%d elementos nao nulos\n", nNulo);
}