#include <stdio.h>
#include <string.h>
#include "calculadora.h"

int main(int argv, char *argc[]){

    if(argv < 3){
        printf("Argumentos insuficientes");
        return 0;
    }
    
    if(strcmp(argc[1], "soma") == 0){
        soma(argv, argc);
    }
    else if(strcmp(argc[1], "multiplica") == 0){
        multiplica(argv, argc);
    }
    else if(strcmp(argc[1], "subtrai") == 0){
        subtrai(argv, argc);
    }
    else if(strcmp(argc[1], "divide") == 0){
        divide(argv, argc);
    } else {
        printf("Comando nao existe");
    }

    return 0;
}