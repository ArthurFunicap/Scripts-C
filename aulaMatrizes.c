#include <stdio.h>

int main(){
    int matrix[3][3];
    int l, c = 0;
    
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;

    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;

    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d ", matrix[l][c]);
        }
        printf("\n");
    }
}