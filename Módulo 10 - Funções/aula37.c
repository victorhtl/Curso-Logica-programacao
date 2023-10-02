// Faça uma função que receba um valor inteiro
// como argumento e retorne o quadrado deste
// valor

// argumentos -> parâmetros de funções

#include <stdio.h>

int imprime(int valor){
    return valor*valor;
}

int main(){
    int result;

    result = imprime(5);

    printf("%d", result);

    return 0;
}