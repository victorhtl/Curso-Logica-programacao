#include <stdio.h>
#include <stdarg.h>

// #include <stdarg.h>
// va_list ap;
// va_start(ap, ultimo_argumento_definido)
// va_arg(ap, tipo_de_dado)
// va_end(ap);

int soma(int qtde, ...){
    va_list ap;
    va_start(ap, qtde);

    int soma = 0;

    for(int i = 0; i < qtde; i++){
        soma += va_arg(ap, int);
    }

    return soma;
}

int main(){
    int resultado;

    resultado = soma(5, 2, 4, 5, 3, 6);

    printf("%d", resultado);
}