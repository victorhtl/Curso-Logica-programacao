// Argumentos para main
// int argc, char *argv[]
// argc -> argument count 
// argv -> argument values

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int soma = 0;

    for(int i = argc; i > 0; i--){
        soma += atoi(argv[i]);
    }
    
    printf("%d", soma);
    
    
    return 0;
}