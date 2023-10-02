#include <stdio.h>

// 6 = 6 

// Numeros perfeitos
// 6 = 3 2 1 = 6
// 28 = 1 + 2 + 4 + 7 + 14 = 28

// Numero imperfeito
// 8 = 1 + 2 + 4 = 7 

// 6
int perfeito(int n){
    int soma = 0;

    for(int i = n; i > 0; i--){
        if(n % i == 0 && n != i){
            soma += i;
        }
    }

    if(soma == n){
        return 0;
    }
    return 1;
}

int main(){
    int resultado;

    // Retorna 0 se o número for perfeito
    resultado = perfeito(29);

    if(resultado == 0){
        printf("E perfeito");
    } else {
        printf("Nao e perfeito");
    }
    return 0;
}