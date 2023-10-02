#include <stdio.h>

int main(){
    char valor;

    printf("Digite um valor de 0 a 255: ");
    scanf("%u", &valor);

    printf("O binario e: ");

    // Ocorre uma rotação de bits aqui
    for(int i = 0; i < 8; i++){

        // Para cada valor, testa de o bit mais significativo é 1
        if(valor & 0b10000000){
            // Se sim, printa 1
            printf("1");
        } else {
            // Se nao, printa 0
            printf("0");
        }
        // O bit mais significativo passa a ser o próximo
        valor = valor<<1;
    }

    return 0;
}