#include <stdio.h>

int main(){
    static int x;
    int y;
    int z;

    printf("X -> %x\n", &x);
    printf("Y -> %x\n", &y);
    printf("Z -> %x\n", &z);
}



