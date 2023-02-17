// Pré-processadores
// pre processado

// include
// define

// if 
// else
// elif
// endif

// ifdef -> if defined -> se esta definido
// ifndef -> if not defined -> se nao esta definido

#include <stdio.h>

#define AUTOR "Victor"

int main(){

#ifndef AUTOR
printf("Precisa definir um autor");
#endif

    return 0;
}