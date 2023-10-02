#include <stdio.h>

// Código da porta XOR
// Resulta verdadeiro se e somente se ambas as entradas forem diferentes
/* a b | S
   0 0 | 0
   0 1 | 1
   1 0 | 1
   1 1 | 0
*/

int main(){
    int a, b;
    int XOR;

    a = 1;
    b = 1;
  
    XOR = (a||b) && !(a&&b);

    printf("%d", XOR);
    return 0;
}