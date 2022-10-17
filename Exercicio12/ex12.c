#include <stdio.h>

//Gerenciador de saques

int main(void){
	float valor;
	int qtdNotas100, qtdNotas50, qtdNotas20, qtdNotas10, qtdNotas5, qtdNotas2, qtdNotas1; 
	
	printf("Valor a ser sacado: ");
	scanf("%f", &valor);
	
	if(valor>=100){
	qtdNotas100 = valor/100;
	valor -= qtdNotas100*100;
	printf("%d nota(s) de R$100,00\n", qtdNotas100);
	}
	
	if(valor!=0 && valor>=50){
	qtdNotas50 = valor/50;
	valor -= qtdNotas50*50;
	printf("%d nota(s) de R$50,00\n", qtdNotas50);
	}

	if(valor!=0 && valor>=20){
	qtdNotas20 = valor/20;
	valor -= qtdNotas20*20;
	printf("%d nota(s) de R$20,00\n", qtdNotas20);
	}

	if(valor!=0 && valor>=10){
	qtdNotas10 = valor/10;
	valor -= qtdNotas10*10;
	printf("%d nota(s) de R$10,00\n", qtdNotas10);
	}

	if(valor!=0 && valor>=5){
	qtdNotas5 = valor/5;
	valor -= qtdNotas5*5;
	printf("%d nota(s) de R$5,00\n", qtdNotas5);
	}

	if(valor!=0 && valor>=2){
	qtdNotas2 = valor/2;
	valor -= qtdNotas2*2;
	printf("%d nota(s) de R$2,00\n", qtdNotas2);
	}

	if(valor!=0 && valor>=1){
	qtdNotas1 = valor/1;
	valor -= qtdNotas1*1;
	printf("%d nota(s) de R$1,00\n", qtdNotas1);
	}
	
	}
