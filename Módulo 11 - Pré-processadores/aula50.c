// Pré-processadores
// pre processado

// include
// define

// if 
// else
// elif
// endif

// ifdef
// ifndef

#include <stdio.h>

#define MCU 0

#if MCU == 1
int main(){
    printf("PIC18");
    return 0;
}
#else
int main(){
    printf("ARM");
    return 0;
}
#endif
