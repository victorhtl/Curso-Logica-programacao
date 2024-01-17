#include <stdio.h>

int main(){
    char caracter;    

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);

    if(caracter < 65 || caracter > 122){
        printf("O caracter %c e invalido", caracter);
        return 0;
    }

    if(caracter >= 91 && caracter <= 96){
        printf("O caracter %c e invalido", caracter);
        return 0;
    }

    if(caracter + 32 > 122){
        printf("Maiusculo: %c\n", caracter - 32);
    } else {
        printf("Minusculo: %c\n", caracter + 32);
    }
}