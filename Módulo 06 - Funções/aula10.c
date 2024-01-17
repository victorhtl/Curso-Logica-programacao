#include <stdio.h>

/*
Em matemática, um número perfeito é um número natural 
para o qual a soma de todos os seus divisores naturais 
próprios (excluindo ele mesmo) é igual ao próprio número.
*/

// Numeros perfeitos
// 6 = 3 2 1 = 6
// 28 = 1 + 2 + 4 + 7 + 14 = 28

// Numero imperfeito
// 8 = 1 + 2 + 4 = 7 

// Retorna 1 se o numero for perfeito
// Retorna 0 se for imperfeito
int isPerfect(int n);

int main(){
    int resultado;

    // Retorna 1 se o número for perfeito
    resultado = isPerfect(8);

    if(resultado){
        printf("E perfeito");
    } else {
        printf("Nao e perfeito");
    }
}

int isPerfect(int n){
    int soma = 0;

    for(int i = n; i > 0; i--){
        if(n % i == 0 && n != i){
            soma += i;
        }
    }

    if(soma == n){
        return 1;
    }
    return 0;
}
