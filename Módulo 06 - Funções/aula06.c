#include <stdio.h>

// Escopo de variáveis

int valor = 50; // Escopo global

void print();

// Escopo de main
int main(){
    printf("%d\n", valor);
    valor = 20;
    print();
}

// Escopo de print
void print(){
    printf("%d\n", valor);
}