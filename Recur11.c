#include <stdio.h>

int partozero(int n){

    if(n <= 0)
        printf("%d", n);
    else{
        printf("%d\n", n);
    return partozero(n-2);
    }
    return 0;
}

int main(){
    int num;

    scanf("%d", &num);

    partozero(num);
}