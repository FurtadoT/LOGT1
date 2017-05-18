#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 18.
	Construa um programa em C que indique se um numero digitado está
compreendido entre 20 e 90 ou não (20 e 90 não estão na faixa de valores).
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if ((num > 20) && (num < 90))
		printf("O numero %d esta compreendido entre 20 e 90", num);
	else
		printf("O numero %d nao esta compreendido entre 20 e 90", num);
	
	return 0;
}