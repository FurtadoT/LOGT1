#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 18.
	Construa um programa em C que indique se um numero digitado est�
compreendido entre 20 e 90 ou n�o (20 e 90 n�o est�o na faixa de valores).
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