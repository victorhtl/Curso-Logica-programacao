#include <stdio.h>

int main() {
	/*
	Carro popular R$90/dia
		Até 100km R$0,2/km
		Acima R$0,1/km
	Carro luxo R$150/dia
		Até 200km R$0,3/km
		Acima R$0,25/km
	*/
    int modelo;
    float dias, km, preco; 

    printf("*****Calculadora de debito de veiculo*****\n");

    printf("Qual modelo de carro voce escolheu?\n");
    printf("1. Popular\n");
    printf("2. Luxo\n");
    scanf("%d", &modelo);

    printf("Quantos dias voce utilizou o carro? ");
    scanf("%f", &dias);

    printf("Quantos km voce rodou? ");
    scanf("%f", &km);

    // Popular
    if(modelo == 1){
        if(km > 100){
            preco = dias * 90. + km*0.1;
        } else {
            preco = dias * 90. + km*0.2;
        }
    }
    // Luxo
    if(modelo == 2){
        if(km > 200){
            preco = dias * 150. + km*0.25;
        } else {
            preco = dias * 150. + km*0.3;
        }
    }

    printf("O valor total foi de R$%.2f", preco);
    return 0;
}