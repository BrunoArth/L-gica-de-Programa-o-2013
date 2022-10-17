#include <stdio.h>

//nota semestral

int main(void){
	float nota1, nota2;
	float media;

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	media = (nota1+nota2)/2;

	printf("Sua media e: %.2f\n", media);

	return 0;
}
