#include <stdio.h>

// Declaração de arrays
// Buffer no scanf
// Limitando o tamanho da string no console
// Strings com espaços no scanf 

int main(){
    int vetor[64]; // Sem inicializar
    int valores[2] = {14, 4000, 50}; // Array inicializado

    char string[] = "Bom dia";
    char string2[] = {'B', 'o', 'm', ' ', 'd', 'i', 'a', '\0'};

    // string -> "A" = 'A' + '\0';
    // caracter -> 'A' = 0100 0001
    // "A" != 'A'

    //printf("%s\n", string);
    //printf("%s", string2);

    return 0;
}