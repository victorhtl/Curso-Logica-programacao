#include <stdio.h>

int main(){
    // iterar
    int array[] = {40, 65, 71, 0, 38, 25};
    char string[] = "Ola mundo";  // '\0'

    int contadora = 0;
    char *p = string;

    while(contadora < 6){ // Encerra quando contadora = 6
        printf("%d ", array[contadora]);
        contadora++;
    }

    printf("\n");

    while(*p){ // Encerra quando ocorrer um 0 no array
        printf("%c ", *p);
        p++;
    }
}