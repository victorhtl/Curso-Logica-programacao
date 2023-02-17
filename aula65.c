#include <stdio.h>
#include <stdlib.h>

char * retorna_array(int size){
    char *p = malloc(size);
    return p;
}

int main(){
    char *p;

    p = retorna_array(4);

    p[0] = 'o';
    p[1] = 'l';
    p[2] = 'a';
    p[3] = '\0';

    printf("%s", p);

    free(p);

    return 0;
}