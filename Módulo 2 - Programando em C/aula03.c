#include <stdio.h>

// placeholder
// %d -> numero
// %c -> caracter
// %x -> hexadecimal

// char -> caracter
// int -> inteiro

int main(){
    char valor = 126; // 0111 1110
    char valor2 = 127;
    char valor3 = 128; // 1000 0000
    char valor4 = 129; 
    char valor5 = 130;
    char letra = 128; // 0110 0001
    int Valor = 40;

    /*
    printf("%c\n", valor);
    printf("%c\n", valor2);
    printf("%c\n", valor3);
    printf("%c\n", valor4);
    printf("%c", valor5);
    */

    printf("%x", letra);

    return 0;
}