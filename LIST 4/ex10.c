#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 10.
	A conversão de graus Fahrenheit para centígrados e obtida pela fórmula C = 5/9 (F - 32). Escreva um algoritmo que calcule e escreva uma tabela de graus centígrados em função de graus Fahrenheit que variem de 50 a 150 de 1 em 1.

*/
int main(void){
	int contadorA;
	
	printf("Segue a tabela de conversao de Fahrenheit para Centigrados de 50 a 150:\n");
	
	for (contadorA = 50; contadorA <= 150; contadorA++){
		printf("%d Fahrenheit = %.2lf Centigrados\n", contadorA, ((contadorA - 32.0)*5/9));
	}	

	return 0;
}