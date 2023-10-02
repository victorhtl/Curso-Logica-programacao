// Escopo 

#include <stdio.h>

// Escopo global
int result = 50;
// Pode ser acessada por todo o código

int soma(){
    // result declarada dentro do escopo de soma
    printf("%d\n", result);
    return 0;
}

int main(){
    result = 5;
    printf("%d\n", result);

    soma();
    printf("%d\n", result);
    return 0;
}