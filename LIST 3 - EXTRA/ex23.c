#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 23.
	Escreva um programa em C que dada a idade de uma pessoa, determine sua
classificação segundo a seguinte tabela:
		• - maior de idade;
		• - menor de idade;
		• - pessoa idosa (idade superior ou igual a 65 anos).
*/

int main(void){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 18)
		printf("Voce e menor de idade");
	else if (idade < 65)
		printf("Voce e maior de idade");
	else
		printf("Voce e uma pessoa idosa");
	
	return 0;
}