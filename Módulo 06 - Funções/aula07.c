#include <stdio.h>

// passagem por valor
// passagem por referência

int swap(int *a, int *b);

int main(){
    int a = 5;
    int b = 6;
    
    swap(&a, &b);

    printf("Fora de swap: A = %d B = %d", a, b);
}

int swap(int *a, int *b){
    int aux;

    aux = *b;
    *b = *a;
    *a = aux;

    printf("Dentro de swap: A = %d B = %d\n", *a, *b);
}