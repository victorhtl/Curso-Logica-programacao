#include <stdio.h>
#include <string.h>

// Passagem por valor
// Passagem por referência

struct person{
    char nome[30];
    int idade;
};

void fala_oi(char *nome, int idade){
    idade = 40;
    strcpy(nome, "Paulo");
    printf("Ola %s, voce tem %d anos\n", nome, idade);
}

int main(){
    struct person pessoa1;

    strcpy(pessoa1.nome, "Joao");
    pessoa1.idade = 30;

    fala_oi(pessoa1.nome, pessoa1.idade);

    printf("Idade = %d\n", pessoa1.idade);
    printf("Nome = %s", pessoa1.nome);

    return 0;
}