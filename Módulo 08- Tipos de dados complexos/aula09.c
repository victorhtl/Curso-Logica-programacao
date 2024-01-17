#include <stdio.h>

// bit-fields
typedef struct Data {
    int dia : 5; // 31
    int mes : 4; // 12
    short int ano;
} Data;

int main(){ 

    Data data = {1, 1, 2024};
    printf("Tamanho da struct: %d\n", sizeof(data));
    printf("Data: %d/%d/%d\n", data.dia, data.mes, data.ano);
}