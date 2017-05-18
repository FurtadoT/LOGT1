#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERC�CIO 4.
	A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc. Escreva um algoritmo que gere a s�rie de Fibonacci at� o vig�simo termo.

*/
int main(void){
	int contadorA, n1 = 1, n2 = 1;
	
	printf("A lista de todos os numeros pares entre 1-50 e:\n{");
	
	printf("%d, %d, ", n1, n2);
	for (contadorA = 0; contadorA < 18; contadorA++){//At� o 18 ir� pegar at� o vig�simo termo, j� que os dois primeiros est�o fora do loop (1 e 1)
		n2 += n1;
		n1 = n2 - n1;
		printf("%d", n2);
		
		if (contadorA < 17)
			printf(", ");
	}
	
	printf("}");	

	return 0;
}