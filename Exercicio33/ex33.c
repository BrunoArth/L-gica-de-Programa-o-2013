#include <stdio.h>

//Inverter Palavras

int main(void){
	char palavra[20];
	char palavraInvertida[20];
	int cont = 0;
	int qntdLetras = 0;

	printf("Digite a palavra\n");
	scanf("%s", &palavra);

	for(int i = 0; palavra[i]!='\0'; i++){
		qntdLetras++;	
		}
	qntdLetras--;

	for(qntdLetras; qntdLetras>=0; qntdLetras--){
		palavraInvertida[cont]=palavra[qntdLetras];
		cont++;
		}
	printf("Palavra invertida, %s\n", &palavraInvertida);
}
		




