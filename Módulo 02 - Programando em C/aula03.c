#include <stdio.h>

/* Operadores aritméticos
+
-
*
/
++ (incremento de uma unidade)
-- (decremento de uma unidade)
*/

int main(){
    int valor1 = 20; // Declarada e inicializada
    int valor2 = 40; // Declarada e inicializada
    int valor3 = 2;  // Declarada e inicializada

    int resultado;   // Declarada e não inicializada

    resultado = valor1 + valor2;

    resultado++; // incrementando resultado (60+1)

    printf("Resultado = %d\n", resultado);

    resultado--; // decrementa (61 - 1)
    resultado--; // decrementa (60 - 1)

    printf("Resultado = %d\n", resultado);

    resultado = (valor1 + valor2) * valor3;

    printf("Resultado = %d\n", resultado);

}