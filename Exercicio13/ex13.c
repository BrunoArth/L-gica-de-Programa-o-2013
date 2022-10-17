#include <stdio.h>
#include <math.h>

//Biblioteca math

int main(void){
	float num;

	printf("Digite um numero:");
	scanf("%f", &num);

	printf("Arrendodado para cima: %.2f\n", ceil(num));
	printf("Arrendodado para baixo: %.2f\n", floor(num));
	printf("Raiz quadrada: %.2f\n", sqrt(num));
	printf("Elevado a 2: %.2f\n", pow(num,2));
	printf("Seno: %.2f\n", sin(num));
	printf("Cosseno: %.2f\n", cos(num));
	printf("Tangente: %.2f\n", tan(num));
	printf("Logaritmo: %.2f\n", log(num));
	printf("Logaritmo na base 10: %.2f\n", log10(num));
}
