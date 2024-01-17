#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int magico, chute;
	srand(time(NULL));
	magico = rand() % 20;

	while(1){
		printf("Adivinhe: ");
		scanf("%d", &chute);

		if(chute == magico){
			printf("CORRETO");
			break;
		} else {
			if(chute < magico){
				printf("Baixo\n");
			} else {
				printf("Alto\n");
			}
		}
	}
}