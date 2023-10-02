#include <stdio.h>

// Ponteiro -> um tipo de dado -> armazena endereços
// char, int, ponteiro

// & -> o endereço de
// * -> o valor de 

int main(){
    char a = 5; // Isso aqui é uma variável

    char *b = &a; // Isso aqui é um ponteiro

    printf("%d", *b);
    return 0;
}