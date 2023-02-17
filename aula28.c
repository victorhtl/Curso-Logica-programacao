#include <stdio.h>

// while(1)

int main(){
    int cond = 0;
    int x = 0;

    while(x<10){
        printf("%d\n", x);
        x--;
    }

    /*
    while(1){
        printf("Digite uma funcao\n");
        printf("1. Soma\n");
        scanf("%d", &cond);

        if (cond == 1){
            break;
        }
        printf("Comando invalido\n");
    }
    */

    printf("Terminou");


    return 0;
}