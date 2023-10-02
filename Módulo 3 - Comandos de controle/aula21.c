#include <stdio.h>

int main(){
    char caracter;    

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);

    // Se o valor ASCII do caractere + 32 for maior que 122, então é minúsculo
    if(caracter + 32 > 122){
        // Aqui ele é minúsculo
        // Se for minúsculo, subtrai para ficar minusculo
        printf("Maiusculo: %c\n", caracter - 32);
    } else {
        // Aqui ele é maiúsculo
        // Se for maisculo, soma para ficar minusculo
        printf("Minusculo: %c\n", caracter + 32);
    }
    
    return 0;
}