#include <stdio.h>

// Precedência -> Ordem de prioridade
// 1- !
// 2- > >= < <=
// 3- &&
// 4- ||

int main(){
    int operacao;
    
    //            1          1          1
    operacao = 10 > 5 && !(10 < 9) || 3 <= 4;

    printf("%d", operacao);
    return 0;
}