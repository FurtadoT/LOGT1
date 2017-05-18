#include <stdlib.h>
#include <stdio.h>
/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 8.
	Faça um programa que mostre os números entre 1000 e 2000 que, quando divididos por 11 produzam resto  igual a 5.

*/
int main(void){
	int contadorA = 1000;
		
	printf("A lista de todos os numeros com resto 5 ao se dividir por 11 entre 1000 e 2000 sao:\n{");
	
	while (contadorA % 11 != 5){ contadorA++;} //Acha o primeiro numero que satisfaz

	for (; contadorA < 2000; contadorA+=11){ //Apos achar o valor, vai de 11 em 11 escrevendo os numeros até 2000
		printf("%d", contadorA);
		
		if (contadorA+11 < 2000)
			printf(", ");
	}
	
	printf("}");
	
	return 0;
}