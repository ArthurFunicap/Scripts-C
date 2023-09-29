#include <stdio.h>
#include <string.h>

#define N 13

int main(){
    char class1[N], class2[N], class3[N];
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8;

    fgets(class1, N, stdin);
    fflush(stdin);
    fgets(class2, N, stdin);
    fflush(stdin);
    fgets(class3, N, stdin);
    fflush(stdin);

    resultado1 = strcmp(class1, "vertebrado") + strcmp(class2, "ave") + strcmp(class3, "carnivoro");

    resultado2 = strcmp(class1, "vertebrado") + strcmp(class2, "ave") + strcmp(class3, "onivoro");

    resultado3 = strcmp(class1, "vertebrado") + strcmp(class2, "mamifero") + strcmp(class3, "onivoro");

    resultado4 = strcmp(class1, "vertebrado") + strcmp(class2, "mamifero") + strcmp(class3, "herbivoro");

    resultado5 = strcmp(class1, "invertebrado") + strcmp(class2, "inseto") + strcmp(class3, "hematofago");

    resultado6 = strcmp(class1, "invertebrado") + strcmp(class2, "inseto") + strcmp(class3, "herbivoro");

    resultado7 = strcmp(class1, "invertebrado") + strcmp(class2, "anelideo") + strcmp(class3, "hematofago");

    resultado8 = strcmp(class1, "invertebrado") + strcmp(class2, "anelideo") + strcmp(class3, "onivoro");

    if(resultado1 == 3){
        printf("aguia\n");
    }

    if(resultado2 == 3){
        printf("pomba\n");
    }

    if(resultado3 == 3){
        printf("homem\n");
    }

    if(resultado4 == 3){
        printf("vaca\n");
    }

    if(resultado5 == 3){
        printf("pulga\n");
    }

    if(resultado6 == 3){
        printf("lagarta\n");
    }

    if(resultado7 == 3){
        printf("sanguessuga\n");
    }

    if(resultado8 == 3){
        printf("minhoca");
    }

}