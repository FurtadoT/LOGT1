#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 17.
	Escreva um programa em C que leia um numero e informe se ele é divisível
por 10, por 5 ou por 2 ou se não é divisível por nenhum deles.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if ((num % 10 != 0) && (num % 5 != 0) && (num % 2 != 0))
		printf("O numero %d nao e divisivel por 10, 5 e nem 2", num);
	else{
		if (num % 10 == 0)
			printf("O numero %d e divisivel por 10\n", num);
		if (num % 5 == 0)
			printf("O numero %d e divisivel por 5\n", num);
		if (num % 2 == 0)
			printf("O numero %d e divisivel por 2\n", num);
	}
	
	return 0;
}