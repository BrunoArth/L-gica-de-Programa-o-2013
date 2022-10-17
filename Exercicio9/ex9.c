#include <stdio.h>

//Fahrenheit para Celsius

int main(void){
	float f, c;

	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);

	c = (f-32) * 0.55;

	printf("A temperatura em Celsius e: %.2f \n", c); 
	
	return 0;
	}
