#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 5.
	Escreva um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior e o menor valor fornecido.

*/
int main(void){
	int contadorA, n, maior, menor;
	
	printf("Digite o #1: ");
	scanf("%d", &n);
	maior = menor = n;
	
	for (contadorA = 1; contadorA < 20; contadorA++){
		printf("Digite o #%d: ", contadorA+1);
		scanf("%d", &n);
		
		if (n < menor)
			menor = n;
		if (n > maior)
			maior = n;
	}
	
	printf("O maior e o menor numero digitados, respectivamente, foram: %d e %d", maior, menor);

	return 0;
}