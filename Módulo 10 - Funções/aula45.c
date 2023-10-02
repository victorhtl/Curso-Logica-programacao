// Quantidade de argumentos variáveis

//#include <stdarg.h>

// va_list ap;
// va_start(ap, ultimo_elemento)
// va_arg(ap, tipo_de_dado)

#include <stdio.h>
#include <stdarg.h>

int soma(int qtde, ...){
    int soma = 0;
    va_list ap;
    va_start(ap, qtde);

    for(int i = 0; i < qtde; i++){
        soma += va_arg(ap, int);
    }
    printf("%d", soma);
    return 0;
}

int main(int argc, char *argv[]){
    
    soma(4, 4, 3, 6, 5);
    
    return 0;
}