#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 9.
	Escreva um programa em C para determinar se um numero A é divisível por
um outro numero B. Esses valores devem ser fornecidos pelo usuário.
*/

int main(void){
	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if (num1 % num2 == 0)
		printf("O numero %d e divisivel por %d", num1, num2);
	else
		printf("O numero %d nao e divisivel por %d", num1, num2);
	
	return 0;
}