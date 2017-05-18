#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 2.
	Faça um algoritmo que leia um número N, some todos os números inteiros de 1 a N, e mostre o resultado obtido.

*/
int main(void){
	int N, contadorA, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	soma = 0;
	for (contadorA = 1; contadorA < N; contadorA++){
		soma += contadorA;
	}
	
	printf("\nA soma dos numeros inteiros de 1 a N e igual a: %d\n", soma);	

	return 0;
}