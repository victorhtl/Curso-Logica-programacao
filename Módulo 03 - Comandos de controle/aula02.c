#include <stdio.h>

int main(){

    int velocidade;

    printf("Digite a velocidade: ");
    scanf("%d", &velocidade);

    if(velocidade > 100){
        if(velocidade > 120){
            printf("Multa");
        } else {
            printf("Limite excedido");
        }
    } else {
        printf("Velocidade ok");
    }

}