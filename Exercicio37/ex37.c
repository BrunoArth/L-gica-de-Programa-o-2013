#include <stdio.h>

//Matriz em vetor e vice versa
int main(void){
	int matriz[2][2];
	int vetorM[4];
	int vetor[4];
	int matrizV[2][2];
	
	
	printf("Digite os valores da matriz abaixo\n");
	
	for ( int i=0; i<2; i++ ){
  		for ( int j=0; j<2; j++ ){
			printf("Digite os valor da linha %d na coluna %d\t", i+1, j+1);
     		scanf ("%d", &matriz[i][j]);
  		}
	}
	printf("Passando valores da matriz para vetor...\n");
	for (int i=0; i<2; i++ ){
  		for (int j=0; j<2; j++ ){
  			vetorM[(i*2)+j]=matriz[i][j];   		
  		}
	}
	printf("Concluido!!!\n");
	

	printf("Digite os valores do vetor abaixo\n");
	for(int i = 0; i<4; i++){
		printf("Digite os valor da posicao %d\t", i+1);
     	scanf ("%d", &vetor[i]);
		}
	printf("Passando valores do vetor para matriz...\n");
	for (int i=0; i<2; i++ ){
  		for (int j=0; j<2; j++ ){
  			matrizV[i][j]=vetor[(i*2)+j];   		
  		}
	}
	printf("Concluido!!!\n");

	printf("Imprimir matriz recebida\n");
	for (int i=0; i<2; i++ ){
  		for (int j=0; j<2; j++ ){
     		printf ("%d\t", matriz[i][j]);
  		}
		printf("\n");
	}
	printf("Imprimir vetor a partir da matriz recebida\n");
	for(int i = 0; i<4; i++){
		printf("%d\t", vetorM[i]);
		}
	printf("\n");


	printf("Imprimir vetor recebido\n");
	for(int i = 0; i<4; i++){
		printf("%d\t", vetor[i]);
		}
	printf("\n");

	printf("Imprimir matriz gerada a partir do vetor recebido\n");
	for (int i=0; i<2; i++ ){
  		for (int j=0; j<2; j++ ){
     		printf ("%d\t", matrizV[i][j]);
  		}
		printf("\n");
	}
}
		







