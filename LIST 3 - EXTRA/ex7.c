#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 7.
	Escreva um programa em C que receba um numero e imprima uma das
mensagens: �� m�ltiplo de 3� ou �n�o � m�ltiplo de 3�.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num % 3 == 0)
		printf("O numero %d e multiplo de 3", num);
	else
		printf("O numero %d nao e multiplo de 3", num);
	
	return 0;
}