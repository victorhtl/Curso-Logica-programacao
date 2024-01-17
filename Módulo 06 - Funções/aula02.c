#include <stdio.h>

// Argumentos
// Retorno

int somar(int valor1, int valor2){
    int resultado = valor1 + valor2;
    return resultado;
}

// void = vazio
void imprimeValores(int valor1, char valor2, float valor3){
    printf("%d, %c, %.2f\n", valor1, valor2, valor3);
    return;
}

int main(){
    int valor1 = 5;
    int valor2 = 10;

    int resultado;

    resultado = somar(valor1, valor2);

    imprimeValores(2, 'a', 2.5);

    printf("%d\n", resultado);
}