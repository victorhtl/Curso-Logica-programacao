#include <stdio.h>

// Operador ternário -> ?
// Operação de if e else na mesma linha

int main(){

    char e_verdadeiro;
    e_verdadeiro = 0;

    // Condição     Caso Verdadeiro    Caso Falso
    e_verdadeiro ? printf("Verdade\n") : printf("Falso\n");

    100 > 90 ? printf("E maior") : printf("E menor");

    return 0;
}