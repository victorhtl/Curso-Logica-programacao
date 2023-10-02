#include <stdio.h>

int upper(char *str, char *res);
int lower(char *str, char *res);

int main(void){
    char string[255];    
    char maiusculas[255];
    char minusculas[255];

    printf("Digite uma palavra: ");
    scanf("%[^\n]", &string);

    upper(string, maiusculas); // Para maiúscula
    lower(string, minusculas); // Para minúsculo

    printf("%s\n", maiusculas);
    printf("%s", minusculas);

    return 0;
}

// Recebe uma string e printa no console todos 
// os caracteres maiúsculos
int upper(char *str, char *res){

    while(*str){
        // Se for espaço
        if(*str == ' '){
            *res = *str;
        }
        // Se for minúsculo
        else if (*str + 32 > 122){
            *res = *str - 32;
        }
        // Se for maiúsculo
        else {
            *res = *str;
        }
        str++;
        res++;
    }
    *res = '\0';
    return 0;
}

// Recebe uma string e printa no console todos 
// os caracteres minúsculos
int lower(char *str, char *res){
    while(*str){
        // Se for espaço
        if(*str == ' '){
            *res = *str;
        }
        // Se for maiúsculo
        else if (*str - 32 < 64){
            *res = *str + 32;
        }
        // Se for maiúsculo
        else {
            *res = *str;
        }
        str++;
        res++;
    }
    *res = '\0';
    return 0;
}