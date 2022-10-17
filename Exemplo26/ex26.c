#include<stdio.h>

//Posição e valores de um array

int main(void){
	int nums[10];
	printf("Preencha o array\n");
	for(int i=0; i<10;i++){
		printf("Digite o %d numero: ",i+1);
		scanf("%d", &nums[i]);
	}
	printf("\tNumeros pares que voce digitou\n");
	int contador=0;
	for(int i=0; i<10;i++){
		if(nums[i]%2 == 0 && nums[i]!=0){
			printf("\t\t%d que esta na posicao %d\n", nums[i],i);
			contador++;
			}
	}
	printf("\t\t\tVoce digitou %d numero(s) par(es)\n",contador);
}
