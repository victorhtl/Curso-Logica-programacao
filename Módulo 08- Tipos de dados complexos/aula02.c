#include <stdio.h>

// enum -> enumeracao

enum connectionStatus { SUCESSO, EM_ANDAMENTO = 10, FRACASSO };

int conectaWifi();

int main(){
    /*
    if(conectaWifi() == SUCESSO){

    }
    if(conectaWifi() == EM_ANDAMENTO){

    }
    */
   printf("%d\n", SUCESSO);
   printf("%d", EM_ANDAMENTO);
}