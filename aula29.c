#include <stdio.h>

int main(){//        0,  1,  2,  3,  4,  5
    int array[64] = {50, 10, 35, 21, 0, 80};
    
    int *p = array; // Passando o endereço do array p = 1000, *p=50

    // *p = 0
    while(*p){
        printf("%d\n", *p); // 21
        p++; // 1016
    }
    
    printf("%d\n", *p); // p = 1016 *p = 
    printf("Encontrei o zero");
}