#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 8.
	Escreva um programa em C que leia um numero e informe se ele é ou não
divisível por 5.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num % 5 == 0)
		printf("O numero %d e divisivel por 5", num);
	else
		printf("O numero %d nao e divisivel por 5", num);
	
	return 0;
}