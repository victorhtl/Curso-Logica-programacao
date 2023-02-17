#include <stdio.h>

// 0 = '\0'

int main(){
    char palavra[256];
    char *p = palavra;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    // "EU" = 'E' + 'U' + '\0' 
      
    while(*p){
        // Testa se é minusculo
        if(*p + 26 >= 123){
            printf("%c", *p - 32);
        } else {
            printf("%c", *p);
        }
        p++;
    }

    return 0;
}