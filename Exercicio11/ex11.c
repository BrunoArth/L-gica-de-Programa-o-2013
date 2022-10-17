#include <stdio.h>

//numero invertido de ate 3 dígitos

int main(void){
	int num;
	int invertido;

	printf("Digite um numero de ate 3 digitos: ");
	scanf("%d", &num);
	
	if(num>=100){
		invertido = (num%10);
		num = (num-invertido)/10;
		printf("%d", invertido);
		};
	if(num>=10){
		invertido = (num%10);
		num = (num-invertido)/10;
		printf("%d", invertido);};
	if(num>=1){
		invertido = (num%10);
		printf("%d\n", invertido);};
	
	}

