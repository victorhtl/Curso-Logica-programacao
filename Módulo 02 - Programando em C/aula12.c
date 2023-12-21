#include <stdio.h>

/*
    string -> cadeia de caracteres

    "A" = 'A' + '\0'
    "Ola" = {'O', 'l', 'a', '\0'};

    %s -> formatador de string
*/

int main(){
    //char saudacao[] = {'O', 'l', 'a', '\0'};
    char saudacao[] = "Ola";
    char string[256];

    printf("Insira alguma frase: ");
    gets(string);

    printf("%s", string);
}