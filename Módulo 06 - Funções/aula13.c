// Faça um programa que executa operações pelo terminal
// chamando o programa diretamente
// ex: ./calculadora multiplica 2 4

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int divide(int argv, char *argc[]);
int subtrai(int argv, char *argc[]);
int multiplica(int argv, char *argc[]);
int soma(int argv, char *argc[]);

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

}

int soma(int argv, char *argc[]){
    int result = 0;
    for(int i = 2; i < argv; i++){
        result += atoi(argc[i]);
    }
    printf("%d", result);
}

int multiplica(int argv, char *argc[]){
    int result = 1;
    for(int i = 2; i < argv; i++){
        result *= atoi(argc[i]);
    }
    printf("%d", result);
}

// subtrai 5 4
int subtrai(int argv, char *argc[]){
    int result = atoi(argc[2]);

    for(int i = 3; i < argv; i++){
        result -= atoi(argc[i]);
    }
    printf("%d", result);
}

int divide(int argv, char *argc[]){
    float result = (float) atoi(argc[2]);

    for(int i = 3; i < argv; i++){
        result /= (float) atoi(argc[i]);
    }
    printf("%.2f", result);
}