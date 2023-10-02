#include <stdio.h>

// while - for

int main(){
    int i = 0;

    // for(condicao de inicio, condicao de verdadeiro, passo)
    for(i; i<10; i++){
        printf("%d\n", i);
    }
    i = 0;
    while(i<10){
        printf("%d\n", i);
        i++;
    }

    return 0;
}