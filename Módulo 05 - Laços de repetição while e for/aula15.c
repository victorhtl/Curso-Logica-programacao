#include <stdio.h>

int main(){
	int termo, razao;

	printf("****PROGRESSAO Aritmetica****\n\n");

	printf("Digite o primeiro termo da progressao: ");
	scanf("%d", &termo);

	printf("Digite a razao da progressao: ");
	scanf("%d", &razao);

    for(int i = 0; i < 10; i++){
        printf("%d ", termo);
	    termo += razao;
    } 
    
}