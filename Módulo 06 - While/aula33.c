#include <stdio.h>

// while - for

int main(){
    int i = 0;

    while(i<10){
        printf("%d\n", i);
        i++;
    }

    // O programa só sai desse while quando o usuario entrar com "5" no teclado
    do{
        printf("Digite um numero: \n");
        scanf("%d", &i); // i = 5
    } while(i != 5);

    printf("Acabou")

    return 0;
}