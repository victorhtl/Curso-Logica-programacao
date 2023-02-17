#include <stdio.h>

// XOR

int main(){
    int a, b;
    int XOR;

    a = 1;
    b = 1;
  
    XOR = (a||b) && !(a&&b);

    printf("%d", XOR);
    return 0;
}