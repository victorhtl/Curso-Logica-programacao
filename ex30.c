// Calculadora terminal
/*
Faça um programa que some uma quantidade indeterminada
de valores inseridos pela chamada do programa
*/
#include <stdio.h>

int soma(int qtde, ...){
    int soma = 0;
    va_list ap;

    va_start(ap, qtde);

    for(int i = 0; i < qtde; i++){
        soma += va_arg(ap, int);
    }

    printf("A soma destes valores é: %d", soma);
}

int main(int argc, char *argv[]){
    char *string[] = {"oi", "oi", "io"};

    printf("%d", string[0] == string[2]);
    return 0;
}