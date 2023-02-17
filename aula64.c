#include <stdio.h>

// Recursividade
// Chamada de funções recusivas

int fatorial(int n){
	int res;

	//if(n == 1) return 1;
	printf("%d -> %d\n", n, &n);
	res = fatorial(n - 1) * n;
	return res;
}

int main(){
	int res;

	res = fatorial(1000000);

	printf("%d", res);
	return 0;
}