#include <stdio.h>

int main(){
    float quantidade, preco_final;

    printf("Digite a quantidade de macas compradas: ");
    scanf("%f", &quantidade);

    if(quantidade >= 10){
        preco_final = quantidade * 1.;
    } else {
        preco_final = quantidade * 1.3;
    }

    printf("O preco total da compra de %.2f macas foi R$%.2f", quantidade, preco_final);
    return 0;
}