#include <stdio.h>

int main(){
    int hora;

    printf("Que horas sao? ");
    scanf("%d", &hora);

    if(hora > 23 || hora < 0){
        printf("Hora invalida");
        return 0;
    }

    if(hora > 4 && hora <= 12){
        printf("Bom dia");
    } else if (hora > 12 && hora <=18 ) {
        printf("Boa tarde");
    } else if (hora > 18 || hora <= 4){
        printf("Boa noite");
    }

}