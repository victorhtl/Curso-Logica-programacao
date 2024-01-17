#include <stdio.h>

int main(){
    int valor;
    int contador = 0;

    printf("Digite um valor de 0 a 255: ");
    scanf("%u", &valor);

    printf("O binario e: ");

    while(contador < 8){
        // Testa se o bit mais significativo é 1
        valor & 0b10000000 ? printf("1") : printf("0");

        // O bit mais significativo passa a ser o próximo
        valor = valor<<1;

        contador++;
    }
}