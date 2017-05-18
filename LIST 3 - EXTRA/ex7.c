#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 7.
	Escreva um programa em C que receba um numero e imprima uma das
mensagens: “é múltiplo de 3” ou “não é múltiplo de 3”.
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