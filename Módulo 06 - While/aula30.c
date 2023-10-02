#include <stdio.h>

int main(){//        0,  1,  2,  3,  4,  5
    int array[64] = {50, 10, 35, 21, 0, 80};
    char array2[5] = {'a', 'b', 'c'};

    int *p = array2; // 6422048
    int *pont = array; // 6422048

    // O ponteiro eles sempre serão inteiro

    p++; // char -> incrementou 1 byte
    pont++; // int

    printf("Array2 = %d\n", array2); // Endereço do array2
    printf("p = %d\n", p); // Endereço array2 com incremento

    printf("Array = %d\n", array);
    printf("pont = %d", pont);

    return 0;
}