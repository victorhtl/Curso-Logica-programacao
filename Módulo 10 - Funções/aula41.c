// Chamada por valor -> passa o valor como argumento
// Chamada por referência -> passa o endereço como argumento

#include <stdio.h>

// swap = trocar
int swap(int *x, int *y){
    int aux;

    aux = *y;
    *y = *x;
    *x = aux;
    printf("y = %d x = %d\n", *y, *x);
    return 0;
}

int main(){
    int x = 1;
    int y = 10;

    // Chamada por valor
    swap(&x, &y);

    printf("y = %d x = %d\n", y, x);
    
    return 0;
}