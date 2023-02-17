#include <stdio.h>

// & -> o endereço de
// &input -> o endereço de input
// input -> o valor de input
// scanf()

int main(){
    char input;

    printf("Digite um valor ");

    // Vai receber uma entrada pelo teclado
    scanf("%d", &input); 
    // A partir daqui, a variavel input terá um valor

    printf("O valor que voce digitou foi %c\n", input);
    return 0;
}