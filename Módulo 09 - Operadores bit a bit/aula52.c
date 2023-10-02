// Operadores bit a bit - lógicos
// & -> and
// | -> or
// ^ -> exclusive or
// ~ -> not

#include <stdio.h>

int main(){
    int a = 1; 
    int b = 10;

    printf("%u\n", a ^ b);
    printf("%u\n", a ^ b);
    printf("%u\n", sizeof(~a));

    return 0;
}