#include <stdio.h>

int main(){
    int usuario, senha;

    while(1){
        printf("Digite seu usuario ");
        scanf("%d", &usuario);

        if(usuario == 1234){
            break;
        }  

        printf("Usario incorreto\n");
    }

    while(1){
        printf("Digite sua senha ");
        scanf("%d", &senha);

        if(senha == 1234){
            printf("Acesso concedido");
            break;
        }  

        printf("Senha incorreta\n");
    }

    return 0;
}