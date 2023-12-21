#include <stdio.h>

/*
    array -> arranjo de memória

    É um endereço de memória
    Acessa pelo índice
*/

int main(){
    //char var[]; // Errado
    char var[16];
    int numeros[64] = {5000, 320, 0};

    // Acessar valores:
    numeros[20] = 70;

    int *p = numeros;
    p++;

    printf("%d", *p);
}