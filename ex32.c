#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct {
    char nome[50];
    int idade;
} pessoa[MAX];

enum opcao {insere = 1, exclui, mostra, sair};

void init_list(){
    for(int i = 0; i<MAX; i++){
        pessoa[i].nome[0] = '\0';
    }
}

char find_free(){
    int i;
    for(i = 0; i<MAX && pessoa[i].nome[0]; i++);
    if(i==MAX) return -1;
    return i;
}

int inserir(){
    // Definir onde sera inserido o cadastro
    char ind = find_free();
    if(ind<0){
        printf("Lista cheia\n\n");
        return 1;
    } 

    printf("Digite o nome do usuario: ");
    scanf(" %[^\n]", pessoa[ind].nome);

    printf("Digite a idade do usuario: ");
    scanf("%d", &pessoa[ind].idade);

    printf("\n%s adicionado!! ", pessoa[ind].nome);
    printf("No indice %d\n\n", ind);
    return 0;
}

void mostrar(){
    for(int ind = 0; ind<MAX; ind++){
        if(pessoa[ind].nome[0] != '\0'){
            printf("\n");
            printf("Registro %d\n", ind+1);
            printf("Nome: %s\n", pessoa[ind].nome);
            printf("Idade: %d\n", pessoa[ind].idade);
            printf("\n");
        }
    }
}

void excluir(){
    char registro;

    printf("Digite o registro do usuario que deseja deletar: ");
    scanf("%d", &registro);

    if(pessoa[registro-1].nome[0] != '\0'){
        printf("%s deletado!\n\n", pessoa[registro-1].nome);
        pessoa[registro-1].nome[0] = '\0';
    } else {
        printf("Este registro ja esta livre\n\n");
    }
}

void main(){

    enum opcao escolha;

    init_list();

    printf("%d\n", &pessoa[0].nome[49]);
    printf("%d\n", &pessoa[0].idade);
    printf("%d\n", &pessoa[1].nome[0]);

    while(1){
        printf("Novo registro\n");
        printf("1. Inserir um nome\n");
        printf("2. Excluir um nome\n");
        printf("3. Mostrar todos\n");
        printf("4. Sair\n");
        scanf("%d", &escolha);

        switch(escolha){
            case insere:
                inserir();
                break;
            case exclui:
                excluir();
                break;
            case mostra:
                mostrar();
                break;
            case sair:
                exit(0);
                break;
            default:
                printf("Entrada invalida\n");
                continue;
        }
    }
}