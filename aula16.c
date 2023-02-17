#include <stdio.h>

// Casting -> conversão tipo dado
// char int
// int float

int main(){
    int num = 10000;
    char num2;

    num2 = (char) num;

    printf("%d\n", num);
    printf("%d", num2);
    return 0;
}