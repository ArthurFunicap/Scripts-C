#include <stdio.h>

int main(){
    int mat[4][4] = {{0, 1, 0, 2},{0, 1, 0, 2},{0, 1, 0, 2},{0, 1, 0, 2}};
    int matT[4][4];
    int l, c;

    printf("Matriz:\n\n");

    for(l = 0; l < 4; l++){
        for(c =0; c < 4; c++)
            printf("%d ", mat[l][c]);
        printf("\n");
    }

    printf("Matriz Transposta:\n\n");

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            matT[l][c] = mat[c][l];
        }
    }

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c ++){
            printf("%d ", matT[l][c]);
        }
        printf("\n");
    }
}