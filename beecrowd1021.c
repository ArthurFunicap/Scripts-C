#include <stdio.h>

int main(){
    int C, CQ, V, D, CI, Dd, MU, Mvc, Md, Mc, Mu, valor;
    double MC;

    scanf("%d", &valor);

    C = valor / 100;
    CQ = (valor % 100) / 50;
    V = ((valor % 100) % 50) / 20;
    D = (((valor % 100) % 50) % 20) / 10;
    CI = ((((valor % 100) % 50) % 20) % 10) / 5;
    Dd = (((((valor % 100) % 50) % 20) % 10) % 5) / 2;
    MU = ((((((valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    MC = (((((((valor % 100) % 50) % 20) % 10) % 5) % 2) % 1) / (1 / 2.0);


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", C);
    printf("%d nota(s) de R$ 50.00\n", CQ);
    printf("%d nota(s) de R$ 20.00\n", V);
    printf("%d nota(s) de R$ 10.00\n", D);
    printf("%d nota(s) de R$ 5.00\n", CI);
    printf("%d nota(s) de R$ 2.00\n", Dd);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", MU);
    printf("%.0lf moeda(s) de R$ 0.50\n", MC);
}