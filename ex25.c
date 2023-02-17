#include <stdio.h>

int main(){
	int termo, razao;

	printf("****PROGRESSAO GEOMETRICA****\n\n");

	printf("Digite o primeiro termo da progressao: ");
	scanf("%d", &termo); // 5

	printf("Digite a razao da progressao: ");
	scanf("%d", &razao); // 5

    for(int i = 0; i < 10; i++){
        printf("%d ", termo); // 15
	    termo *= razao; // 15
    } 
    
}