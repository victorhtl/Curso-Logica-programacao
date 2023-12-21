#include <stdio.h>

// 'A' = 65

int main(){
    char valor;

    printf("Digite um caractere: ");
    scanf("%c", &valor);

    valor = valor + 32;

    printf("%c", valor);

}