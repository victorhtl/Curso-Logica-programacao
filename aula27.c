#include <stdio.h>

// switch

int main(){
    char genero;

    printf("Digite o genero ");
    scanf("%c", &genero);

    switch(genero){
        case 'M':
            printf("Masculino\n");
            break;
        case 'F':
            printf("Feminino\n");
            break;
        default:
            printf("Entrada invalida");
            break;
    }

    return 0;
}