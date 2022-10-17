#include <stdio.h>
#include <stdbool.h>

//

int main(void){
	int vetor[30]={0}, vetorSemDuplicidade[30]={0};
	bool run = true;
	int pos = 0;
	int val = 0;
	int function;

	while(run){
		printf("Menu\n");
		printf("Digite 1 para inserir elemento no fim do vetor\n");
		printf("Digite 2 para inserir elemento em uma posicao\n");
		printf("Digite 3 para remover elemento em uma posicao\n");
		printf("Digite 4 para remover todos os elementos iguais do vetor\n");
		printf("Digite 5 para gerar um novo vetor a partir de outro\n");
		printf("Digite 6 para visualizar os vetores\n");
		printf("Digite 7 para encerrar o programa\n");
		scanf("%d", &function);

		if(function == 1){
			printf("Digite o valor\n");
			scanf("%d", &val);
			int contador = 0;
			for(int i =  30; i>0; i--){
				if(vetor[i]==0 && contador == 0){
					vetor[i]=val;
					contador++;
					}
				}}
		else if(function == 2){
			printf("Digite a posicao onde deve ser adicionado o elemento\n");
			scanf("%d",&pos);
			printf("Digite o valor\n");
			scanf("%d", &val);
			vetor[pos]=val;}
		else if(function == 3){
			printf("Digite a posicao onde deve ser removido o elemento\n");
			scanf("%d",&pos);
			vetor[pos]=0;}
		else if(function == 4){
			int vetorCopia[30];
			for(int i = 0; i<30; i++){
				vetorCopia[i]=vetor[i];}
			for(int i = 0; i<30; i++){
				int contador = 0;
				for(int j = 0; j<30; j++){
					if(vetor[i]==vetorCopia[j]){
						contador++;}}
				if(contador>1){
					vetor[i]=0;}
				}
			}
		else if(function == 5){
			printf("Criando novo vetor\n");
			for(int i = 0; i<30; i++){
				int contador = 0;
				for(int j = 0; j<30; j++){
					if(vetor[i]==vetorSemDuplicidade[j]){
						contador++;}}
				if(contador==0){
					vetorSemDuplicidade[i]=vetor[i];}
				}
			printf("Finalizado!!!\n");}
		else if(function == 6){
			printf("Imprimindo vetor original\n");
			for(int i = 0; i<30; i++){
				printf("Pos %d - Valor %d\n",i+1,vetor[i]);}
			printf("Imprimindo sem duplicidade\n");
			for(int i = 0; i<30; i++){
				printf("Pos %d - Valor %d\n",i+1,vetorSemDuplicidade[i]);}}
		else if(function == 7){
			run = false;}
		else{
			printf("***Comando Invalido***\n");}

	}
		

}
