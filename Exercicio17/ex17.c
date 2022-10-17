#include <stdio.h>

//Maior numero

int main(void){
	int n1, n2, n3;
	int maior, id;

	printf("Numero 1: ");
	scanf("%d", &n1);
	printf("Numero 2: ");
	scanf("%d", &n2);
	printf("Numero 3: ");
	scanf("%d", &n3);
	
	if(n1>=n2){
		maior = n1;
		id = 1;
	}else{
		maior = n2;
		id = 2;
		}
	if(maior < n3){
		maior = n3;
		id = 3;
	}
	printf("O maior numero e %d, o %d a ser digitado.\n", maior, id);
}
