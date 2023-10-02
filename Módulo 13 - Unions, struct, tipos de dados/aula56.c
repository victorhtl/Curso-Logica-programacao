// structs
#include <stdio.h>
#include <string.h>

struct my_struct {
    char a[28];
    int b;
} valor[30],y ;

int main(){ 

    y.a[19] = 'b';
    valor[20].a[10] = 'a';

    return 0;
}