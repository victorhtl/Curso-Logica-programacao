#include <stdio.h>

// = -> operador de atribuição

// placeholder -> mecanismo de formatação

int main(){
    //char binario = 0b00011110;
    //char hex     = 0xA2;

    //signed int valor1 = 3000000000; // 10000000 // positivo ou negativo
    char valor2 = 257; // 1 00000001 = 255 + 2

    float valor_decimal = 200.256;

    printf("Valor1 = %d\n", valor2);
    printf("Valor decimal = %.f\n", valor_decimal);
}