#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 3.
	Construa um programa em C que determine (imprima) se um dado numero N
inteiro (recebido atrav�s do teclado) � PAR ou �MPAR.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
		printf("O numero %d e par", num);
	else
		printf("O numero %d e impar", num);
	
	return 0;
}