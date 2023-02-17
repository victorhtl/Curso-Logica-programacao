#include <stdio.h>

int main(){
    int numero1, numero2, resposta;

    printf("Algoritmo de soma\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resposta = numero1 + numero2;

    printf("A soma entre %d e %d = %d", numero1, numero2, resposta);

    return 0;
}