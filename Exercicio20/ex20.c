#include <stdio.h>

//Notas de um aluno, aprovado ou reprovado
int main (void){
	float n1, n2, n3, n4, nf, m;

	printf("Nota 1: ");
	scanf("%f", &n1);

	m += n1;

	printf("Nota 2: ");
	scanf("%f", &n2);

	m += n2;
	
	printf("Nota 3: ");
	scanf("%f", &n3);

	m += n3;

	printf("Nota 4: ");
	scanf("%f", &n4);

	m += n4;
	m = m/4;

	if(m>=7){
		printf("Aprovado por media\n");
		}
	else if(m>=4&&m<7){
		printf("Digite a nota da final: ");
		scanf("%f", &nf);
		if((nf+m)/2 >=5){printf("Aprovado\n");}else{printf("Reprovado\n");}
	
	}else{
		printf("Reprovado por media\n");
		}
}
