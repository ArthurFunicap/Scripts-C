#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int min = 0, max = 10, intervalo;
    int l, c;
    int matA[5][5], matB[5][5], matC[5][5];
    
    intervalo = max - min + 1;
    
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            matA[l][c] = (rand() % intervalo) + min;
        }
    }
    
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            matB[l][c] = (rand() % intervalo) + min;
        }
    }
    
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            matC[l][c] = matA[l][c] + matB[l][c];
        }
    }
    
    printf("Matria A:\n\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            printf("%3d ", matA[l][c]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Matria B:\n\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            printf("%3d ", matB[l][c]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Matria C:\n\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            printf("%3d ", matC[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}