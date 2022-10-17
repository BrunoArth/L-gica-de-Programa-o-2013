#include <stdio.h>

//Positivo ou Negativo

int main(void){
	int n;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n);

	if(n>0){
		printf("Positivo\n");
		}
	else if(n==0){
		printf("Neutro\n");
		}
	else{
		printf("Negativo\n");
		}
	}
