#include <stdio.h>

//Quociente e resto da divisão

int main(void){
	int n1, n2;
	
	printf("Digite o dividendo: ");
	scanf("%d", &n1);

	printf("Digite o divisor: ");
	scanf("%d", &n2);

	float quociente = n1/n2;
	float resto = n1%n2;

	printf("Quociente: %.2f\n",+quociente);
	printf("Resto: %.2f\n",+resto); 
}
