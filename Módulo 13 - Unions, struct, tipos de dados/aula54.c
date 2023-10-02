#include <stdio.h>

typedef union Dado{
    short int completo;
    char valores[2];
} dado;

int main(){
    dado valor;

    valor.valores[0] = 0x64;
    valor.valores[1] = 0x64;

    printf("Valor 0: %x\n", valor.valores[0]);
    printf("Endereco 0: %u\n", &valor.valores[0]);
    printf("Valor 0: %x\n", valor.valores[1]);
    printf("Endereco 0: %u\n", &valor.valores[1]);
    
    printf("Valor completo: %x\n", valor.completo);
    printf("Endereco completo: %u\n", &valor.completo);

    return 0;
}