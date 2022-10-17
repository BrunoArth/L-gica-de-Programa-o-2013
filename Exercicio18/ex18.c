#include <stdio.h>

//Consoante ou vogal

int main(void){
	char l;

	printf("Digite uma letra: ");
	scanf("%c", &l);

	if(l=='a' || l=='e' || l=='i' || l=='o' ||l=='u'){
		printf("Vogal\n");
		}else if(l=='A' || l=='E' || l=='I' || l=='O' ||l=='U'){
		printf("Vogal\n");
		}else
		printf("Consoante\n");
}
