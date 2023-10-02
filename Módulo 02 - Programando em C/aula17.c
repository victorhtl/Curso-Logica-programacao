#include <stdio.h>

// incremento
// i = 1;
// i = 2;

int main(){
    unsigned char i = 2;

    // Incrementa 100 em i, i = 102
    i += 100;
    
    i++; // 103 
    i++; // 104
    i++; // 105

    printf("%d\n", i); // Printa 105 no console
    return 0;
}