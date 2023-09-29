void matNULA(){
    int mat[3][3];
    int l, c;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            mat[l][c] = 0;
        }
    }

    printf("Matriz NULA: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
}

void matQA(){
    srand(time(NULL));
    int mat[3][3];
    int min = -99, max = 99, range;
    int l, c;
    range = max - min + 1;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            mat[l][c] = (rand() % range) + min;
        }
    }

    printf("Matriz Quadrada ALEATORIA: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
}

void matQ(){
    int mat[3][3];
    int valorCoord = 1;
    int l, c;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            mat[l][c] = valorCoord;
            valorCoord += 1;
        }
    }

    printf("Matriz Quadrada: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
}

void matI(){
    int mat[3][3];
    int l, c;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            if(l == c)
                mat[l][c] = 1;
            else
                mat[l][c] = 0;
        }
    }

    printf("Matriz Identidade: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
}