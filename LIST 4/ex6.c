#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 6.
	Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20. Considere que Polegada = Centímetro * 2,54.

*/
int main(void){
	int contadorA;
	
	printf("Segue a tabela de conversao de polegadas para centimetros de 1 a 20:\n");
	
	for (contadorA = 1; contadorA <= 20; contadorA++){
		printf("%d cm = %.2lf polegadas\n", contadorA, (2.54 * contadorA));
	}	

	return 0;
}