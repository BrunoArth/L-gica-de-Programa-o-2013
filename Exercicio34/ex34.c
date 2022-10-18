#include <stdio.h>

//Contar vogais

int main(void){
	char vogais[] = "aeiouAEIOU";
	char palavra[10];
	int contVogais = 0;
	
	printf("Digite a palavra\n");
	scanf("%s", &palavra);

	for(int i = 0; palavra[i]!='\0'; i++){
		for(int j = 0; vogais[j]!='\0'; j++){
			if(palavra[i]==vogais[j]){
				contVogais++;
				break;
			}
		}
	}
	printf("A quantidade de vogais na palavra foi de, %d\n", contVogais);
}
		




