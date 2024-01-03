#include <stdio.h>

int main(){
    int numero1, numero2;
    int cond;
    int resposta;

    printf("Insira um numero: ");
    scanf("%d", &numero1);
    printf("Insira outro numero: ");
    scanf("%d", &numero2);

    printf("\nSelecione uma das operacoes:\n");
    printf("1. Soma\n");
    printf("2. Multiplicacao\n");
    printf("3. Media\n");
    scanf("%d", &cond);

    switch(cond){
        case 1:
            resposta = numero1 + numero2;
            printf("A soma entre eles e %d", resposta);
            break;
        case 2:
            resposta = numero1*numero2;
            printf("A multiplicacao entre eles e %d", resposta);
            break;
        case 3:
            resposta = (numero1+numero2)/2;
            printf("A media entre eles e %d", resposta);
            break;
        default:
            printf("Operacao invalida");
    }
}