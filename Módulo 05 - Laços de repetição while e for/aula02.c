#include <stdio.h>

int main(){
    int numero;

    while(1){
        printf("Contagem regressiva\n");
        printf("Digite um numero maior que zero: ");
        scanf("%d", &numero);

        if(numero <= 0){
            printf("Entrada invalida\n\n");
            continue;
        }
        break;
    }

    while(numero){ // 0
        printf("%d\n", numero);
        numero--;
    }
}