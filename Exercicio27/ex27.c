#include <stdio.h>

//Menor e maior de um vetor

int main(void){
	int vetor[20];
	int maior=0, menor=0, posicaoMaior, posicaoMenor;
	for(int i=0; i<20;i++){
		printf("Digite o numero %d:\n",i);
		scanf("%d",&vetor[i]);
		if(i==0){
			maior = vetor[i];
			menor = vetor[i];
			posicaoMaior = i;
			posicaoMenor = i;
			}
		if(vetor[i]>maior){
			maior = vetor[i];
			posicaoMaior = i;
			}
		if(vetor[i]<menor){
			menor = vetor[i];
			posicaoMenor = i;
			}
		}
	printf("\t!!!Vetor Preenchido!!!\n\n");

	printf("\t\tO maior numero: %d, posicao %d!\n", maior, posicaoMaior);
	printf("\t\tO menor numero: %d, posicao %d\n!", menor, posicaoMenor);	
}
