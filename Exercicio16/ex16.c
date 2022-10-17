#include <stdio.h>

//Numéro par ou impar;

int main(void){
	int n;
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	int r = n%2;

	if(n<=0){
		printf("Numero invalido\n");
		}
	else if(n==1 || r!=0 ){
		printf("Impar\n");
	}else{
		printf("Par\n");
		}
}
