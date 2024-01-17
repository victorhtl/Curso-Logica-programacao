#include <stdio.h>

// do - while

int main(){
    int condicao = 2;
    
    do{
        printf("Loop Executado");
        condicao++;
    }while(condicao == 1);

    /*
    while(condicao == 1){
        printf("Loop Executado");
        condicao++;
    }
    */
}