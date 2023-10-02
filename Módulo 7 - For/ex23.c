#include <stdio.h>

int main(){
	int numero;
    int i = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
    for(i; i<=10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

}