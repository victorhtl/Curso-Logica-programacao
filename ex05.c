#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 10){
        printf("%d e maior que 10", numero);
    } else {
        printf("%d e menor que 10", numero);
    }

    return 0;
}