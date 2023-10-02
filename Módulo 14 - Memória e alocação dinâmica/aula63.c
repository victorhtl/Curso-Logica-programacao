#include <stdio.h>
#include <stdlib.h>

int total;

int quadrado(int x){
    printf("Escopo de quadrado: \n");
    printf("x -> %d\n", &x);

    return x*x;
}

int quadrado_da_soma(int x, int y){
    int z = quadrado(x+y);
    printf("\nEscopo de QDS: \n");
    printf("x -> %d\n", &x);
    printf("x -> %d\n", &y);
    printf("x -> %d\n", &z);
    return z;
}

void main(){
    int a = 4;
    int b = 8;
    total = quadrado_da_soma(a, b);
    
    printf("\nEscopo main: \n");
    printf("a -> %d\n", &a);
    printf("b -> %d\n", &b);

    printf("\nGlobal: \n");
    printf("total -> %d\n\n", &total);
    
    printf("total = %d", total);
}

