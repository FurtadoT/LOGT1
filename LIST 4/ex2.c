#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERC�CIO 2.
	Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros de 1 a N, e mostre o resultado obtido.

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