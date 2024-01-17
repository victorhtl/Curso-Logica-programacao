#include <stdio.h>

#define MAX 64

struct Inventario {
    char nome[64];
    int qtde;
} eletronicos[MAX];

int main(){
    int cond = 0;
    int produto = 0;
    
    do{
        printf("Nome produto: ");
        gets(eletronicos[produto].nome);
        printf("Insira a quantidade: ");
        scanf("%d", &eletronicos[produto].qtde);
        
        produto++;
        
        printf("Adicionar outro? S(0) N(1) ");
        scanf("%d", &cond); 
        getchar();

    } while(cond == 0);
    
    printf("\n");
    
    for(int i = 0; i < produto; i++){
        printf("Nome: %s\n", eletronicos[i].nome);
        printf("Quantidade: %d\n", eletronicos[i].qtde);
        printf("\n");
    }
}