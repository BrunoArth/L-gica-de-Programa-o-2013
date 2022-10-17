#include <stdio.h>

//Posto de gasolina
int main(void){
	float litros, valor, desconto;
	char tipo;

	printf("Gasolina(G) ou Alcool(A)? ");
	scanf("%c", &tipo);

	if(tipo == 'G' || tipo == 'A'){
		printf("Quantidade de litro(s): ");
		scanf("%f", &litros);
		if(tipo == 'G' && litros>=1){
			if(litros<=25){
				desconto = (litros*2.70)*0.03;
				valor = (litros*2.70)-desconto;
				}else{
				desconto = (litros*2.70)*0.05;
				valor = (litros*2.70)-desconto;
				}
			printf("\tGasolina\n");
			printf("\tLitros      - %.2f\n",litros);
			printf("\tValor Total - %.2f\n", (valor+desconto));
			printf("\tDesconto    - %.2f\n",desconto);
			printf("\tValor Final - %.2f\n",valor);
			}else if(tipo == 'G'){
			printf("\t***Quantidade Invalida***\n");
			}

		 if(tipo == 'A' && litros>=1){
			if(litros<=25){
				desconto = (litros*1.90)*0.02;
				valor = (litros*1.90)-desconto;
				}else{
				desconto = (litros*1.90)*0.04;
				valor = (litros*1.90)-desconto;
				}
			printf("\tAlcool\n");
			printf("\tLitros      - %.2f\n",litros);
			printf("\tValor Total - %.2f\n", (valor+desconto));
			printf("\tDesconto    - %.2f\n",desconto);
			printf("\tValor Final - %.2f\n",valor);
			}else if(tipo == 'A'){
			printf("\t***Quantidade Invalida***\n");
			}

	}else{
		printf("\t***Codigo ivalido***\n");
	}
}
