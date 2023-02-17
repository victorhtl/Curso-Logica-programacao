#include <stdio.h>

// break
// continue

// media
int main(){
    int valor1, valor2;
    int media;

    while(1){
        printf("Digite nota 1 ");
        scanf("%d", &valor1);

        printf("Digite nota 2 ");
        scanf("%d", &valor2);

        if(valor1 < 0 || valor2 < 0){
            printf("Valor invalido\n");
            continue;
        }

        media = (valor1 + valor2) / 2;

        printf("A media foi %d\n", media);
    }

    return 0;
}