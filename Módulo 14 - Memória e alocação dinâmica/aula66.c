#include <stdio.h>
#include <stdlib.h>

// malloc -> void* malloc(size_t size)
// calloc -> void* calloc(size_t num, size_t size)
// realloc -> void* realloc(void* ptr, size_t size)

int main(){
    int *p = malloc(1);

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for(int i = 0; i<sizeof(int); i++){
        printf("%d\n", p[i]);
    }

    //int *t = realloc(p, 6 * sizeof(int));

    //free(t);

    return 0;
}