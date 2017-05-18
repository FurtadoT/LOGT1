#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 7.
	Elabore um algoritmo que receba um valor inteiro e informe se o valor recebido é um número primo.

*/

#define TRUE 1
#define FALSE 0

int main(void){
	int N, contadorA, primo = TRUE;
		
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	for (contadorA = 2; contadorA < N; contadorA++){
		if ((N % contadorA) == 0){
			primo = FALSE;
			break;
		}
	}
	
	if (primo == TRUE && N > 1)
		printf("O numero %d e primo.", N);
	else
		printf("O numero %d nao e primo.", N);
	
	return 0;
}