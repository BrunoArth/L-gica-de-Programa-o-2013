#include<stdio.h>


//Ano issexto, s, ou n;
int main(void){
	int ano;

	printf("Digite o ano: ");
	scanf("%d", &ano);

	if(ano%4 == 0){
		if(ano%100 == 0){
			if(ano%400 == 0){printf("%d e bissexto\n", ano);}else{printf("%d nao e bissexto\n", ano);}
			}else{printf("%d e bissexto\n", ano);}
		}else{printf("%d nao e bissexto\n", ano);}
}
