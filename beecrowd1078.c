#include <stdio.h>

int main(){
    int num, tabuada = 1;

    scanf("%d", &num);

    while(tabuada <= 10){
        printf("%d x %d = %d\n", tabuada, num, tabuada * num);
        tabuada += 1;
    }
}