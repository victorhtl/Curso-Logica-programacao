#include <stdio.h>

int imprime(char valor1, int valor2, float valor3){
    printf("%c %d %.2f\n", valor1, valor2, valor3);
    return 0;
}

int main(){
    char a = 'b';
    int b = 15;
    float c = 1.5;

    imprime('a', 30, 0.5);

    imprime(a, b, c);
    return 0;
}