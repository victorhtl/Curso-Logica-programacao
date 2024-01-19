#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = malloc(sizeof(int)*10);

    *p = 10;
    p[1] = 20;
    *(p + 2) = 30;

    free(p);
}