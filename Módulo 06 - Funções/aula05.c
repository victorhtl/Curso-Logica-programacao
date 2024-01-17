#include <stdio.h>

// Protótipo de funções
// Documentação

// Não recebe valores acima de 255 ou abaixo de 0
// @Decription: Converter um valor inteiro para um binario e mostrar no console
void printaBinario(int valor);

int main(){
    printaBinario(150);
}

void printaBinario(int valor){
    for(int i = 0; i < 8; i++){
        // Testa se o bit mais significativo é 1
        valor & 0b10000000 ? printf("1") : printf("0");

        // O bit mais significativo passa a ser o próximo
        valor = valor<<1;
    }
}





