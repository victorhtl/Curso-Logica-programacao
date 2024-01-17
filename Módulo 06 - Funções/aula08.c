#include <stdio.h>

// Funções com Arrays

// Retorna 1 se o caractere existir
// Ou 0 se não existir
int is_in(char letra, char *str){
    while(*str){
        if(*str == letra) return 1;
        else str++;
    }
    return 0;
}

void criaArray(char *str){
    *str = 'o'; // indice 1
    str++;
    *str = 'l'; // indice 2
    str++;
    *str = 'a'; // indice 3
    str++;
    *str = 0;   // indice 4
}

int main(){
    char str[64] = "Ola mundo";
    char *str2;

    if(is_in('b', str)){
        printf("Encontrei");
    }

    criaArray(str);

    printf("%s", str);
}