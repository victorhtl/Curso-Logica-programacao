#include <stdio.h>

int main(){
    char frase[256];
    char *p = frase;

    printf("Digite uma frase: ");
    gets(frase);
      
    while(*p){
        if(*p > 96 && *p < 123){ // se for minusculo
            printf("%c", *p - 32);
        } else {
            printf("%c", *p);
        }
        p++;
    }
}