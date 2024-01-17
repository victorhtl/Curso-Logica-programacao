#include <stdio.h>

struct Funcionario {
    char *nome;
    char *funcao;
    int idade;
};

void falaOi(struct Funcionario *funcionario){
    printf("Ola %s!\n", funcionario->nome);
    printf("Sua funcao e: %s\n", funcionario->funcao);
    printf("Sua idade e: %d\n", funcionario->idade);
}

int main(){
    struct Funcionario funcionario;

    funcionario.nome = "Alencar";
    funcionario.funcao = "Projetista";
    funcionario.idade = 30;

    falaOi(&funcionario);
}