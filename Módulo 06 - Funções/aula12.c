#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// argc -> quantidade de argumentos
// argv -> valores dos argumentos

// <stdlib.h>
// atoi() -> converte string em int

// <string.h>
// strcmp() -> compara duas strings

int main(int argc, char *argv[]){
    
    // Converter uma string para inteiro
    //int valor = atoi(argv[1]);
    //printf("%d", valor);

    // Checa se das strings sao iguais
    if(strcmp(argv[1], "somar") == 0){
        printf("Sao iguais");
    }

}