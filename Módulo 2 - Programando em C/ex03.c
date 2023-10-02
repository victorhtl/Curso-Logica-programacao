#include <stdio.h>

int main(){
    float temperatura_fah, temperatura_cel;

    printf("****Conversor de temperatura****\n");
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_fah);

    temperatura_cel = 5.*( (temperatura_fah-32.)/9. );

    printf("Celsius: %.2f", temperatura_cel);

    return 0;
}