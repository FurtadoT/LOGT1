#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERC�CIO 1.
	Fa�a um algoritmo que mostre todos os n�meros pares entre 1 e 50.

*/
int main(void){
	int contadorA;
	
	printf("A lista de todos os numeros pares entre 1-50 e:\n{");
	
	for (contadorA = 2; contadorA < 50; contadorA++){
		if (contadorA % 2 == 0){
			printf("%d", contadorA);
			
			if ((50 - contadorA) > 2)
				printf(", ");
		}
	}
	
	printf("}");	

	return 0;
}