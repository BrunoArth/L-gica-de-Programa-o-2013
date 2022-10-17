#include <stdio.h>

//Maiores numeros em um vetor
int main(void){
	int vetor1[10], maior1 = 0, pos1=0;
	int vetor2[10], maior2 = 0, pos2=0;
	int vetor3[10] = {0};
	printf("Preencha o primeiro vetor!\n");
	for(int i = 0; i<10;i++){
		printf("Digite o %d do Vetor 1:\n",i+1);
		scanf("%d",&vetor1[i]);
		if(vetor1[i]>maior1){
			maior1 = vetor1[i];
			pos1 = i;
			}
		}
	vetor3[pos1] = maior1;
	printf("Vetor 1 Finalizado!\n");

	printf("Preencha o segundo vetor!\n");
	for(int i = 0; i<10;i++){
		printf("Digite o %d do Vetor 2:\n",i+1);
		scanf("%d",&vetor2[i]);
		if(vetor2[i]>maior2){
			maior2 = vetor2[i];
			pos2 = i;
			}
		}
	if(pos1==pos2){
		vetor3[pos2+1] = maior2;
		}else{
	vetor3[pos2] = maior2;
	}
	printf("Vetor 2 Finalizado!\n");

	printf("Imprimindo Vetor 3!!!\n");
	for(int i = 0; i<10;i++){
		printf("Posicao %d, Valor %d\n",i+1,vetor3[i]);
		}
	printf("\t\t\t***Progama finalizado!!!\n\n");
	}
