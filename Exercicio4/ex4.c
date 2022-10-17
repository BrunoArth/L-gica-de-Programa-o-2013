# include<stdio.h>

// Área e perímetro do retangulo

int main(void){
	float altura, base;
	float area, perimetro;

		printf("Digite a altura do retangulo: ");
		scanf("%f",&altura);

		printf("Digite a base do retangulo: ");
		scanf("%f",&base);

		area = altura * base;
		perimetro = altura*2 + base*2;

		printf("A area do retangulo e: %.2f \n", +area);
		printf("O perimetro do retangulo e: %.2f \n", +perimetro);
	
	return 0;
}
