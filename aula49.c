// Pré-processadores
// pre processado

// include
// define
// if 
// ifdef
// ifndef
// else
// elif
// endif

#include <stdio.h>
#include <unistd.h>

#define AVISO 3

#define SOMA(a, b) a + b

int main(void){
    
    printf("%d", SOMA(1, 1));
    
    /*
    char conta_esteira = 0;

    while(1){
        conta_esteira++;

        printf("%d\n", conta_esteira);

        if (conta_esteira == AVISO) {
		    printf("Reposicao\n");
            break;
        }

        sleep(1);
    }
    */
    return 0;
}