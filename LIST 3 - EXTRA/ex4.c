#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 4.
	Escreva um programa em C para determinar se um dado numero N (recebido
através do teclado) é POSITIVO, NEGATIVO ou NULO.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num > 0)
		printf("O numero %d e POSITIVO", num);
	else if (num < 0)
		printf("O numero %d e NEGATIVO", num);
	else
		printf("O numero %d e NULO", num);
	
	return 0;
}