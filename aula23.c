#include <stdio.h>

// Operadores lógicos
// && -> AND - E
// ||
// !

// 0 -> Falso
// 1 -> Verdadeiro, 1 = 2 = 3 = 45 

int main(){
    int media, nota1, nota2;

    printf("Digite nota 1 ");
    scanf("%d", &nota1);

    printf("Digite nota 2 ");
    scanf("%d", &nota2); 

    media = (nota1 + nota2) / 2;

    // > 6 passam
    // 6 - 4 recuperação
    // < 4 - reprovam 

    if(media > 6){
        printf("Passou");
    } else if (media < 6 && media > 4){
        printf("Recuperacao");
    } else {
        printf("Reprovou");
    }

    return 0;
}