#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 19.
	Construir um programa em C que leia um numero e imprima se ele é igual a
5, a 200, a 400, se está no intervalo entre 500 e 1000, inclusive, ou se ela está
fora dos escopos anteriores.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num == 5)
		printf("O numero %d e igual a 5", num);
	else if (num == 200)
		printf("O numero %d e igual a 200", num);
	else if (num == 400)
		printf("O numero %d e igual a 400", num);
	else if ((num >= 500) && (num <= 1000))
		printf("O numero %d esta compreendido entre 499 e 1001", num);
	else
		printf("O numero %d esta fora dos escopos (5, 200, 400 [500, 1000])", num);  
		   	
	return 0;
}