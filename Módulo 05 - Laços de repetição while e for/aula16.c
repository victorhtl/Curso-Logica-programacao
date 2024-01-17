#include <stdio.h>

int main(){
    int valor = 0;
    int resposta = 1; 
    int condicao = 0;

    while(1){
        printf("Calculadora Fatorial\n\n");
        printf("Digite o valor: ");
        scanf("%d", &valor);

        if(valor < 0){
            printf("Fatorial de numero menor que 0 nao existe\n");
            continue;
        }
        break;
    }

    for(valor; valor > 0; valor--){
        resposta *= valor;
        printf("Executei\n");
    }
    printf("%d\n", resposta);

}