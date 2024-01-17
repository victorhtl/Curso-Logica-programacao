#include <stdio.h>

/*
Laço de repetição while
Cria um loop de repetição em um trecho de programa
*/

// while = enquanto
// break = parar


int main(){
    /*
    int contador = 0;
    while(contador < 10){
        printf("%d\n", contador);
        contador++; // 10
    }
    printf("Terminou");
    */

   int op;
   while(1){
        printf("Calculadora\n");
        printf("Digite a op\n");
        printf("1. Soma\n");
        scanf("%d", &op);

        if(op == 1){
            break;
        }   
        
        printf("Entrada invalida\n");
   }
   printf("Entrou na calculadora");
}