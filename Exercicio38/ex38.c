#include <stdio.h>

//Soma e subtração de matrizes
int main(void){
	int linhaA, colunaA, linhaB, colunaB, linha=0, coluna=0;
	
	printf("\tQual a quantidade de linhas da primeira matriz\t");
	scanf("%d", &linhaA);
	printf("\n\tQual a quantidade de colunas da primeira matriz\t");
	scanf("%d", &colunaA);
	int matrizA[linhaA][colunaA], matrizSom[linhaA][colunaA], matrizSub[linhaA][colunaA];

	printf("\n\tPreencha a primeira matriz\n");
	while(linha<linhaA){
		while(coluna<colunaA){
			printf("\n\tDigite o valor na posicao, linha %d, coluna %d\t", linha+1, coluna+1);
			scanf("%d", &matrizA[linha][coluna]);
			coluna++;		
		}
	coluna = 0;
	linha++;
	}
	linha = 0;

	printf("\n\tQual a quantidade de linhas da segunda matriz\t");
	scanf("%d", &linhaB);
	printf("\n\tQual a quantidade de colunas da segunda matriz\t");
	scanf("%d", &colunaB);

	int matrizB[linhaB][colunaB];

	printf("\n\tPreencha a segunda matriz\n");
	while(linha<linhaB){
		while(coluna<colunaB){
			printf("\n\tDigite o valor na posicao, linha %d, coluna %d\t", linha+1, coluna+1);
			scanf("%d", &matrizB[linha][coluna]);
			coluna++;		
		}
	coluna = 0;
	linha++;
	}
	linha = 0;

	printf("\n\tImprimindo primeira matriz...\n");
	while(linha<linhaA){
			while(coluna<colunaA){
				printf("\t\tLinha %d, Coluna %d, Valor %d\n", linha+1, coluna+1, matrizA[linha][coluna]);
				coluna++;
			}
			coluna=0;
			linha++;
		}
		linha=0;

	printf("\n\tImprimindo segunda matriz...\n");
	while(linha<linhaB){
			while(coluna<colunaB){
				printf("\t\tLinha %d, Coluna %d, Valor %d\n", linha+1, coluna+1, matrizB[linha][coluna]);
				coluna++;
			}
			coluna=0;
			linha++;
		}
		linha=0;

	if(linhaA == linhaB && colunaA == colunaB){
		while(linha<linhaA){
			while(coluna<colunaA){
				matrizSom[linha][coluna]=matrizA[linha][coluna]+matrizB[linha][coluna];
				matrizSub[linha][coluna]=matrizA[linha][coluna]-matrizB[linha][coluna];
				coluna++;
			}
			coluna=0;
			linha++;
		}
		linha=0;

		printf("\n\tImprimindo matriz de soma...\n");
		while(linha<linhaB){
				while(coluna<colunaB){
					printf("\t\tLinha %d, Coluna %d, Valor %d\n", linha+1, coluna+1, matrizSom[linha][coluna]);
					coluna++;
				}
				coluna=0;
				linha++;
			}
			linha=0;
		
		printf("\n\tImprimindo matriz de subtracao...\n");
		while(linha<linhaB){
				while(coluna<colunaB){
					printf("\t\tLinha %d, Coluna %d, Valor %d\n", linha+1, coluna+1, matrizSub[linha][coluna]);
					coluna++;
				}
				coluna=0;
				linha++;
			}
			linha=0;
	}else{
		printf("\n\t\t\t!!!Nao e possivel somar ou subtrair as matrizes, pois tamahos diferentes!!!\n");}

}
		








