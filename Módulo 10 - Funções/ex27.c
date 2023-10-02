#include <stdio.h>

// Recebe 2 valores para operar
// Recebe um terceiro para definir a operação
// 1 - soma
// 2 - subtração
// 3 - multiplicação
// 4 - divisão

int calculadora(int a, int b, int op){
    if(op == 1) return a + b;
    if(op == 2) return a - b;
    if(op == 3) printf("%d", a * b);
    if(op == 4) printf("%.2f", (float) a / (float) b);
    
    return 0;
}

int main(){
    int result;
    result = calculadora(10, 5, 1);
    printf("%d", result);
    return 0;
}