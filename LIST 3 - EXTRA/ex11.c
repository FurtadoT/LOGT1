#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 11.
	Escreva um programa em C que leia um numero e informe se ele é divisível
por 3 e por 7.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if ((num % 3 == 0) && (num % 7 == 0))
		printf("O numero %d e divisivel por 3 e por 7", num);
	else
		printf("O numero %d nao e divisivel por 3 e por 7", num);
	
	return 0;
}