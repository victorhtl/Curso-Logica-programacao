#include <stdio.h>

// switch

int main(){
    char genero;

    printf("Digite o genero ");
    scanf("%c", &genero);

    switch(genero){
        // Caso genero = 'M'
        case 'M':
            printf("Masculino\n");
            break;
        // Caso genero = 'F'    
        case 'F':
            printf("Feminino\n");
            break;
        // Caso genero seja qualquer outra coisa
        default:
            printf("Entrada invalida");
            break;
    }

    return 0;
}