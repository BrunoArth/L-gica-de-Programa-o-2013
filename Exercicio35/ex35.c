#include <stdio.h>

//Cadastrar matriz e pritar

int main(void){
	int matriz[3][3];
	
	printf("Digite os valores da matriz abaixo\n");
	
	for ( int i=0; i<3; i++ ){
  		for ( int j=0; j<3; j++ ){
			printf("Digite os valor da linha %d na coluna %d\t", i+1, j+1);
     		scanf ("%d", &matriz[i][j]);
  		}
	}
	printf("Imprimindo a matriz\n");
	for (int i=0; i<3; i++ ){
  		for (int j=0; j<3; j++ ){
     		printf ("%d\t", matriz[i][j]);
  		}
		printf("\n");
	}
}
		





