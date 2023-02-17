#include <stdio.h>

int main(){
    char var1 = 2;
    char var2;

    printf("%d\n", sizeof(var1));
    printf("%d\n", sizeof(var1 << 1));

    var2 = var1 << 1;

}