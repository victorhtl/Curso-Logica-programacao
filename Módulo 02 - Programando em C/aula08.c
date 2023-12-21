#include <stdio.h>

int main(){
    float temperatura_fah, temperatura_cel;

    printf("****Conversor de temperatura****\n");
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_fah);

    temperatura_cel = (temperatura_fah-32.)/1.8;

    printf("Celsius: %.2f", temperatura_cel);

    return 0;
}