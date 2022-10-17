#include <stdio.h>

int main(void){
	int num=1;
	while(num!=0){
		printf("Digite um numero(0 para sair)");
		scanf("%d",&num);
		int contador = 3;
		if(num!=0){
		contador = 0;
		for(int i = 1; i<=num; i++){
			if(num%i==0){
					contador++;
			}
		}
		if(contador<=2){
		printf("\t%d e primo\n", num);
			}else{printf("\t%d nao e primo\n", num);}
		
		
		}
	}
}
