// = operador de atribuição
// Operadores de ponteiro * &
// & = o endereço de
// * = o valor no endereço

// Operadores aritméticos
// +
// - 
// *
// /
// %

// char 1 byte
// int 4 byte
// float 4 bytes

// %f -> float

// casting -> alterar o tipo da variável

#include <stdio.h>

int main(){
    int a = 12;
    int b = 10;
    
    int resposta;

    resposta = a % b;

    printf("%d", resposta);
    
    return 0;
}