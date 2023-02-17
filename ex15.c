#include <stdio.h>

int main(){
    int numero;

    printf("Contagem regressiva\n");
    printf("Digite um numero maior que zero ");
    scanf("%d", &numero);

    if(numero <= 0){
        printf("Entrada invalida");
        return 0;
    }
        //  0
    while(numero){
        printf("%d\n", numero); // 1
        numero--; // 0
    }
    return 0;
}