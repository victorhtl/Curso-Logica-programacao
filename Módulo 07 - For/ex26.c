#include <stdio.h>

int main(){
    int termo, resposta, condicao;

    while(1){
        printf("Digite o primeiro termo: ");
        scanf("%d", &termo); // 0

        if(termo < 0){
            printf("Fatorial de numero menor que 0 nao existe\n");
            continue;
        }

        resposta = 1;

        for(termo; termo > 0; termo--){
            resposta *= termo; // 5
        }
        printf("%d\n", resposta);

        printf("Deseja realizar outro fatorial (1): ");
        scanf("%d", &condicao);
        if(condicao != 1){
            break;
        }
    }
    return 0;
}