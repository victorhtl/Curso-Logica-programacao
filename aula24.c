#include <stdio.h>

// || - OU
// ! - NOT

// Programa controle de temperatura

int main(){
    int temp;

    printf("Digite uma temperatura: ");
    scanf("%d", &temp);
    
    //      1           1
    if(temp < 10 || temp > 30){
        printf("Temperatura fora da faixa permitida");
    } else {
        printf("Temperatura OK");
    }

    return 0;
}