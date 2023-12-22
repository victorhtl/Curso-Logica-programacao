#include <stdio.h>

// switch

int main(){
    int tecla = 4;

    switch(tecla){
        case 1:
            printf("Funcao 1");
            break;
        case 2:
            printf("Funcao 2");
            break;
        case 3:
            printf("Funcao 3");
            break;
        default:
            printf("Qualquer outra funcao");
    }
}