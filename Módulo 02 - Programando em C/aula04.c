#include <stdio.h>

/*
    Ponteiros -> variáveis que armazenam
                 enderecos

    * -> valor de 
    & -> endereço de
*/

int main(){
    int a = 10; // Isto é uma variável

    int *p = &a; // Isto é um ponteiro

    printf("Endereco de a = %X\n", &a);
    printf("p = %X\n", p);
    printf("Valor de p = %d\n", *p); // (aponta para a)
}