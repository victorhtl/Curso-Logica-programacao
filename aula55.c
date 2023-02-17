#include <stdio.h>

// enum -> enumeração

enum semana {seg, ter, qua, qui, sex, sab, dom};

int main(){

    enum semana dia = qui;

    switch(dia){
        case seg:
            printf("Segunda-feira");
            break;
        case ter:
            printf("Terca-feira");
            break;
        case qua:
            printf("Quarta-feira");
            break;
        case qui:
            printf("Quinta-feira");
            break;
        case sex:
            printf("Sexta-feira");
            break;
        case sab:
            printf("Sabado");
            break;
        case dom:
            printf("Domingo");
            break;
    }

    return 0;
}