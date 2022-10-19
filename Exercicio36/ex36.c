#include <stdio.h>

//Matriz simétrica

int main(void){
	int matriz[5][5];
	
	
	printf("Digite os valores da matriz abaixo\n");
	
	for ( int i=0; i<5; i++ ){
  		for ( int j=0; j<5; j++ ){
			printf("Digite os valor da linha %d na coluna %d\t", i+1, j+1);
     		scanf ("%d", &matriz[i][j]);
  		}
	}
	printf("Imprimindo a matriz\n");
	for (int i=0; i<5; i++ ){
  		for (int j=0; j<5; j++ ){
     		printf ("%d\t", matriz[i][j]);
  		}
		printf("\n");
	}

	int y = 1, k, sim = 1;
    while (sim == 1 && y < 5){
    	k = 0;
        while (sim == 1 && k < y){
    		if(matriz[y][k] == matriz[k][y]){
				sim = 1;
				}else{
				sim = 0;
				}
  			k = k + 1;
  			}
        y = y + 1;
  	}
	if(sim==1){
		printf("A matriz e simetrica\n");
	}else{printf("A matriz nao e simetrica\n");}
}
		






