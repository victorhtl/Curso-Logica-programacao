#include <stdio.h>

/*
    scanf -> entrada de dados
    
    Passar o endereço!!!!!
*/

int main(){
    int input1;
    int input2;
    int resultado;
    
    printf("Digite um valor: ");
    scanf("%d", &input1);

    printf("Digite outro valor: ");
    scanf("%d", &input2);

    resultado = input1 + input2;

    printf("Voce resultado %d", resultado);

   //scanf("Digitei %d e %d", &input1, &input2);
   //printf("%d, %d", input1, input2);
}