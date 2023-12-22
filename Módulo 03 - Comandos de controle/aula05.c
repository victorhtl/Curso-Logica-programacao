#include <stdio.h>

int main(){
    int nota1, nota2, nota3, media;

    printf("****Calculo de media****\n");

    printf("Nota 1: ");
    scanf("%d", &nota1);

    printf("Nota 2: ");
    scanf("%d", &nota2);

    printf("Nota 3: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("Media: %d\n", media);

    if(media >= 6){
        printf("O estudante foi aprovado");
    } else {
        printf("O estudante foi reprovado");
    }

    return 0;
}