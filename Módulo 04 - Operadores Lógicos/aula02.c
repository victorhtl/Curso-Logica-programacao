#include <stdio.h>

// && -> AND
// || -> OR
// !  -> NOT

int main(){
    int media, nota1, nota2;

    nota1 = 5;
    nota2 = 2;

    media = (nota1 + nota2) / 2;

    printf("%d\n", media);

    if(media >= 6){
        printf("Passou");
    } else if(media < 6 && media >= 4){
        printf("Recuperacao");
    } else {
        printf("Reprovou");
    }
}