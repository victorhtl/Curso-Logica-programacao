#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int *p;

    p = malloc(sizeof(int)*4);
    if(p == NULL) return 1;

    *p = 10;

    free(p);
    
    p = malloc(sizeof(int)*2);
    if(p == NULL) return 1;

    *p = 20;

    free(p);
}

