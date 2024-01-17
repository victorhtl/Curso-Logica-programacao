#include <stdio.h>

// && -> AND
// || -> OR
// !  -> NOT

int main(){
    /*
    int valor = 0;

    if(!valor){
        printf("Verdadeiro");
    }
    */

   int temperatura = 19;

   if(temperatura > 40 || temperatura < 20){
        printf("Alerta Temperatura");
   } else {
        printf("Temperatura ok");
   }
}