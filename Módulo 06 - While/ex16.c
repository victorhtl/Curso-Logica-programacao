#include <stdio.h>

int main() {
    int numero, passo;

    printf("Digite um numero ");
    scanf("%d", &numero);

    if(numero <= 0){
        printf("Entrada invalida");
        return 0;
    }

    printf("Digite um passo para decremento ");
    scanf("%d", &passo);

    while(numero >= 0){
        printf("%d ", numero);
        numero -= passo;
    }
    printf("Acabou");


	return 0;
}