#include <stdio.h>

int main(){
    int valores[256];
    int count = 0;
    int menor, maior;

    while(1){
        printf("Digite um valor: ");
        scanf("%d", &valores[count]);

        if(valores[count] == 0){
            break;
        }

        count++;
    }
    count = 0;

    while(valores[count]){
        if(count == 0){
            maior = valores[count];
            menor = valores[count];
        }

        if(valores[count] > maior){
            maior = valores[count];
        }
        if(valores[count] < menor){
            menor = valores[count];
        }
    
        count++;
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}