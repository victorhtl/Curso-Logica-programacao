#include <stdio.h>

int main(){
    int usuario, senha;

    printf("Digite um usuario: ");
    scanf("%d", &usuario);

    if(usuario != 1234){
        printf("Usuario incorreto");
    } else {
            printf("Digite sua senha: ");
            scanf("%d", &senha);
        if(senha != 4321){
            printf("Senha incorreta");
        } else {
            printf("Acesso concedido");
        }
    }

    return 0;
}