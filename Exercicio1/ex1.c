#include <stdio.h>   

//Armezenar duas variáveis, A e B
//Passar o valor de A para B e vice-versa
//Printar na tela A e B

void main()
{ 
 int A, B, temp;
 
 A = 10;
 B = 20;
 temp = B;	
 B = A;
 A = temp;

 printf("Valor de A, %d. Valor de B, %d.", A, B);
 
 
}
