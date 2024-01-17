#include <stdio.h>

// const -> valores constantes
// volatile -> valores que podem ser alterador externamente
// extern -> variaveis globais em diferentes folhas
// static ->
// register ->

const volatile int leituraSerial;

extern volatile int valorGlobal;

static int escopoGlobal;

void incrementa(){
    register int valor1 = 10;
    valor1++;

    static int valor = 10;
    valor++;
    printf("%d\n", valor);
}

int main(){
    const int valor = 10;

    incrementa();
    incrementa();
    incrementa();
    incrementa();
}