// Escopos

#include <stdio.h>

// Todos acessam result
int result = 50;

// Escopo de soma
int soma(){
    int a = 20; // a -> 1000
    int b = 20;
    printf("Soma: %d\n", a + b);
    return 0;
}

// Escopo de main
int main(){
    int a = 10; // a -> 1000
    int b = 10;
    printf("Main: %d\n", a + b);
       
    soma();   
    return 0;
}