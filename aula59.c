#include <stdio.h>
#include <string.h>

// Operador seta
// ->
// Acessar diretamente os atributos de um endereço de memória

struct person{
    char nome[30];
    int idade;
};

void fala_oi(struct person *p){
    printf("Ola %s, voce tem %d anos\n", p->nome, p->idade);
}

int main(){

    struct person p1;
    strcpy(p1.nome, "Fernando");
    p1.idade = 25;

    fala_oi(&p1);

    return 0;
}