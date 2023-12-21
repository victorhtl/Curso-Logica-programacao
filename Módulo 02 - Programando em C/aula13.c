#include <stdio.h>

int main(){
    int numero;
    char str[64];

    printf("Digite um numero: ");
    gets(str);

    printf("Digite outra frase: ");
    gets(str2);

    printf("Frase 1:  %s\n", str);
    printf("Frase 2:  %s\n", str2);
}