#include <stdio.h>

int main() {
    int numero, passo;

    while(1){
        printf("Decremento com passo definido\n");
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero <= 0){
            printf("Deve ser maior que 0\n");
            continue;
        }
        break;
    }

    while(1){
        printf("Digite um passo para decremento: ");
        scanf("%d", &passo);

        if(passo < 1){
            printf("Deve ser maior que 1\n");
            continue;
        }
        break;
    }

    while(numero >= 0){
        printf("%d ", numero);
        numero -= passo;
    }
    printf("Acabou");

	return 0;
}