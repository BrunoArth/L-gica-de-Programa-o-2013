#include <stdio.h>

//Quantas vezes o numero aparece no vetor
int main(void){
	int vetor[15], vetorQtd[15]={0};
	int n;
	int contador = 0;

	printf("Preencha o vetor\n");
	for(int j = 0; j<15;j++){
			printf("Digite o numero %d:\n", j+1);
			scanf("%d",&vetor[j]);
			}
		
	printf("Digite numero a ser pesquisado:\n");
	scanf("%d",&n);

	for(int i = 0; i<15; i++){
		if(n==vetor[i]){
			contador++;
			vetorQtd[i]=i+1;
			}
		}
	printf("Voce digitou %d, %d vez(es), nas posicoes: ",n,contador);
	for(int i = 0; i<15;i++){
		if(vetorQtd[i]!=0){
			printf("%d, ",vetorQtd[i]);
			}
		}printf("\n");
	}

