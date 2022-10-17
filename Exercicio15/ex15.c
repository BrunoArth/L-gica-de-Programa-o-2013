#include <stdio.h>

int main(void){
	int n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	if(n<0){
		printf("O modulo do numero e: %d\n", n*(-1));
		}
	else{
		printf("O modulo do numero e: %d\n", n);
		}
}
