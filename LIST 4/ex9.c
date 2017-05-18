#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERC�CIO 9.
	Crie um algoritmo que receba v�rios n�meros inteiros e positivos e imprima o produto dos n�meros �mpares digitados e a soma dos pares. O algoritmo encerra quando o zero ou um n�mero negativo � digitado.

*/
int main(void){
	int N, pares = 0;
	double impares = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	while (N > 0){
		if (N % 2 == 0)
			pares += N;
		else
			impares *= N;
	
		printf("Digite um numero: ");
		scanf("%d", &N);
	}
	
	printf("\nMultiplicacao dos impares: %.2lf. Soma dos pares: %d.\n", impares, pares);
	
	return 0;
}