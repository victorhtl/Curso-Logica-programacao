// Funções
#include <stdio.h>

// função 2
int comando(){
    printf("Ola\n");
    printf("Estou dentro de comando\n");
    return 0;
}

// função 1
int main(){
    comando(); // Chamando a função comando

    printf("Estou fora de comando");
    return 0;
}