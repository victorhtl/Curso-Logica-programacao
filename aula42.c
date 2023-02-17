#include <stdio.h>

// Função por chama de referência
int imprime(char *p){

    while(*p){ // '\0'
        printf("%c ", *p);
        p++;
    }

    return 0;
}

int main(){
    char saudacao[] = "Ola, tudo bem?";

    // Passando um endereço para a função
    imprime(saudacao);

    return 0;
}