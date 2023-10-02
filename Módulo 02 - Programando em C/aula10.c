#include <stdio.h>

// arrays = matriz unidimensional = vetor

int main(){
    unsigned int valores[16];

    valores[0] = 5;
    valores[1] = 6;
    valores[10] = 200;

    //printf("Digite um numero ");
    //scanf("%d", &valores[2]);
    //printf("%d", valores[2]);

    printf("%d", sizeof(valores));


    return 0;
}