#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 3.
	Elabore um algoritmo que calcule o valor do fatorial de um número informado pelo usuário.  Lembrando que 0! = 1.

*/
int main(void){
	int N, contadorA, fatorial;
	
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	fatorial = 1;
	for (contadorA = 1; contadorA <= N; contadorA++){
		fatorial *= contadorA;
	}
	
	printf("\nO fatorial de %d e igual a: %d\n", N, fatorial);	

	return 0;
}