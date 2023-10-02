#include <stdio.h>

// Declaração de arrays
// Buffer no scanf
// Limitando o tamanho da string no console
// Strings com espaços no scanf

int main(){
    char string[64];
    
    // string -> primeiro endereço do array
    // '\0'
    printf("Digite uma string: ");
    scanf("%s", string); // '\n'
    printf("A string digitada foi: %s", string);

    /*
    int valor;
    char caracter;

    printf("Digite um valor: \n");
    scanf("%d", &valor);

    // enter -> '\n' -> caracter

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);

    printf("Valor =  %d\n", valor);
    printf("Caracter = %c", caracter);
    */
    return 0;
}