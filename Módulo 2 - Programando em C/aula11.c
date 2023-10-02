#include <stdio.h>

// string -> corda
//              0   1   2   3   4
// Ola mundo = 'O' 'l' 'a' ' ' 'm' 'u' 'n' 'd' 'o' '\0'

// %s -> string

int main(){
    char string[] = "Ola mundo"; // '\0'

    printf("%s", string);

    return 0;
}