#include <stdio.h>
#include <string.h>

// Funções recebendo uma struct
// Por valor ou por referência

struct person{
    char nome[30];
    int idade;
};

void fala_oi(struct person p){
    printf("Ola %s, voce tem %d anos\n", p.nome, p.idade);
}

int main(){
    struct person p1;
    strcpy(p1.nome, "Fernando");
    p1.idade = 25;

    struct person p2;
    strcpy(p2.nome, "Joao");
    p2.idade = 12;

    fala_oi(p1);
    fala_oi(p2);
    
    return 0;
}