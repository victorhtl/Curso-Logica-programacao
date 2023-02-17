#include <stdio.h>

// Campos de bits -> bitfield

struct {
    int bit1 : 1;
    int bit2 : 4;
    float x;
} booltype;

int main(){
    printf("%d", sizeof(booltype));
    return 0;
}