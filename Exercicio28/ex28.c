#include <stdio.h>

//Um vetor para outro
int main(void){
	int vetor1[10] = {0,1,2,3,4,5,6,7,8,9};
	int vetor2[10];
	
	printf("Passando os dados de um vetor para outro\n");
	for(int i = 0; i<10; i++){
		vetor2[i] = vetor1[i];
		printf("\tPosicao:%d ; Valor:%d.\n", i, vetor2[i]);
		}
	
	}
