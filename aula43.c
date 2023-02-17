#include <stdio.h>

int imprime(char *array);
int is_in(char *str, char caracter);

int main(){
    char saudacao[] = "Ola, tudo bem?"; // '\0'
    int verifica;

    // Estou passando um endereço para a função
    // imprime(saudacao);

    verifica = is_in(saudacao, 'z');

    if(verifica){
        printf("Este caracter existe");
    } else {
        printf("Este caracter nao existe");
    }

    return 0;
}

// @Descrição
// Imprime uma string no console
// @Parâmetros
// Recebe uma string
// @Retorna
// nada
int imprime(char *array){
    while(*array){
        printf("%c ", *array);
        array++;
    }
    return 0;
}

// @Descrição
// Verifica se existe um caracter dentro de uma string
// @Parâmetros
// str -> string, caracter -> um caracter
// @Retorna
// Retorna 1 se o caracter existir dentro da string
// Retorna 0 se o caracter não existir dentro da string
int is_in(char *str, char caracter){
    while(*str){
        if(caracter == *str){
            return 1;
        }
        str++;
    }
    return 0;
}