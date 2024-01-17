#include <stdio.h>

// int, char, float, double

union Data {
    char primeiro_valor[4];
    int segundo_valor;
    float terceiro_valor;
};

union DataConvertion{
    char valores[2];
    short int valor_total;
};

int main(){
    union Data valor; // instanciar
    union DataConvertion conversao;

    conversao.valores[0] = 0xAA;
    conversao.valores[1] = 0x17;

    printf("%d", conversao.valor_total);

    //valor.primeiro_valor = 40;
    //valor.segundo_valor = 500;
    valor.terceiro_valor = 5.0;

    //printf("%d\n", valor.primeiro_valor);
    //printf("%d\n", valor.segundo_valor);
    //printf("%d", valor.a);
    
    //char dado = 0b11110100;
    //printf("%d", dado);

    //printf("%d", sizeof(valor));
}