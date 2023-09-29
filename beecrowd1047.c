#include <stdio.h>

int main(){
    int Xh, Xm, Yh, Ym, Th, Tm;

    scanf("%d%d%d%d", &Xh, &Xm, &Yh, &Ym);

    if(Xh == Xm && Xm == Yh && Yh == Ym){
        Th = 24;
        Tm = 0;
    } else if(Xh < Yh){
        if(Xm < Ym){
            Th = Yh - Xh;
            Tm = Ym - Xm;
        } else{
            Th = Yh - Xh;
            Tm = Xm - Ym;
        }
    } else{
        if(Xm < Ym){
            Th = Xh - Yh;
            Th = 24 - Th;
            Tm = Ym - Xm;
        } else{
            Th = Xh - Yh;
            Th = 24 - Th;
            Tm = Xm - Ym;
        }
    }

    if(Th == Tm && Tm == 1){
        Th = 0;
        Tm = 59;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Th, Tm);
}