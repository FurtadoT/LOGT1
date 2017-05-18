#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 4.
	A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc. Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.

*/
int main(void){
	int contadorA, n1 = 1, n2 = 1;
	
	printf("A lista de todos os numeros pares entre 1-50 e:\n{");
	
	printf("%d, %d, ", n1, n2);
	for (contadorA = 0; contadorA < 18; contadorA++){//Até o 18 irá pegar até o vigésimo termo, já que os dois primeiros estão fora do loop (1 e 1)
		n2 += n1;
		n1 = n2 - n1;
		printf("%d", n2);
		
		if (contadorA < 17)
			printf(", ");
	}
	
	printf("}");	

	return 0;
}