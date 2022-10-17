#include <stdio.h>

//Receber idade e mostrar quantidade de meses e dia

int main(void){
	int idade;
	int dias, meses;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	meses = idade*12;
	dias = idade*365+(idade/4);

	printf("Sua idade em anos: %d\n", +idade);
	printf("Sua idade em meses: %d\n", +meses);
	printf("Sua idade em dias: %d\n", +dias);

	}
