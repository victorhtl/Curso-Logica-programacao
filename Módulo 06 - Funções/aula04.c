#include <stdio.h>

void printaBinario(int valor){
    for(int i = 0; i < 8; i++){
        // Testa se o bit mais significativo é 1
        valor & 0b10000000 ? printf("1") : printf("0");

        // O bit mais significativo passa a ser o próximo
        valor = valor<<1;
    }
}

int main(){
    printaBinario(150);
}





