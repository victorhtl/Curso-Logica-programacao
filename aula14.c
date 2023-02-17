#include <stdio.h>

int main(){
    int string[] = {50, 60, 70};
    // int string[] = "desta forma"; errado

    // Esperam receber endereços de memória
    int *p = string; // O endereço

    printf("Array: %d\n", string);
    printf("Ponteiro: %d", &p[1]); // string[0]

    /*
    printf("##################\n");

    int count = 100;
    int *temp;

    temp = &count; // Passei o endereço de count para temp

    printf("Count = %d\n", count);
    printf("temp = %d\n", *temp);

    *temp = 200;

    printf("Count = %d\n", count);
    printf("temp = %d\n", *temp);
    */
    return 0;
}