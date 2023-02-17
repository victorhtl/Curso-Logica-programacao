#include <stdio.h>

int main(){
    char caracter;    

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);

    if(caracter + 32 > 122){
        printf("Maiusculo: %c\n", caracter - 32);
    } else {
        printf("Minusculo: %c\n", caracter + 32);
    }
    
    return 0;
}