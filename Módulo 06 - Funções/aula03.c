#include <stdio.h>

// Recebe 2 valores para operar
// Recebe um terceiro para definir a operação
// 1 - soma
// 2 - subtração
// 3 - multiplicação
// 4 - divisão

float calcular(float a, float b, int op){
    int resultado;

    switch(op){
        case 1:
            resultado = a + b;
            break;
        case 2:
            resultado = a - b;
            break;
        case 3:
            resultado = a * b;
            break;
        case 4:
            resultado = a / b;
            break;
        default:
            printf("ERRO: Operacao invalida\n");
            resultado = 0;
    }
    
    return resultado;
}

int main(){
    float result;

    result = calcular(10, 5, 5);

    printf("%.2f", result);
}