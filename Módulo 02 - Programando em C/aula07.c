#include <stdio.h>

int main(){
    int numero;

    printf("Digite algum numero: ");
    scanf("%d", &numero);

    numero++;
    printf("Sucessor: %d\n", numero);

    numero--; 
    numero--; 
    printf("Antecessor: %d", numero);

    return 0;
}