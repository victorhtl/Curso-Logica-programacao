#include <stdio.h>
#include <time.h>

// signed char -127 -> 127
// int
// float
// unsigned signed

char retorna(){
    printf("Ola\n");
    return 'a';
}

int soma(){
    return 10 + 10;
}

int main(){
    //int segundos;
    //segundos = time(NULL); // Função
    
    printf("%c", retorna());

    return 0;
}