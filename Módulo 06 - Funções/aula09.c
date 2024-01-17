#include <stdio.h>

void toUpper(char *str);
void toLower(char *str);

int main(void){
    char string[255];    

    printf("Digite uma frase: ");
    gets(string);

    toUpper(string); // Para maiúscula
    printf("%s\n", string);

    toLower(string); // Para minúsculo
    printf("%s\n", string);
}

void toUpper(char *str){
    while(*str){
        if(*str > 96 && *str < 123) 
            *str = *str - 32;
        str++;
    }
}

void toLower(char *str){
    while(*str){
        if(*str > 64 && *str < 90) 
            *str = *str + 32;
        str++;
    }
}