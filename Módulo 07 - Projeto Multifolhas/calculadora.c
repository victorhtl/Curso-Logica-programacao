#include "calculadora.h"

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