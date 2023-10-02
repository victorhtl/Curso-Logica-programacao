#include <stdio.h>

// Tome cuidado com a ordem de prioridade dos operadores
// Isto pode alterar o resultado final de seu programa

// Precedência -> Ordem de prioridade
// 1- !
// 2- > >= < <=
// 3- &&
// 4- ||

int main(){
    int operacao;
    
    operacao = 10 > 5 && !(10 < 9) || 3 <= 4;
    //         (10>5) && (!(10<9)) || (3<=4)
    //            1   &&   (!(0))  ||    1
    //            1   &&     1     ||    1
    //                 1    ||    1
    //                       1

    printf("%d", operacao);
    return 0;
}