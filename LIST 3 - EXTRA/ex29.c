#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 29.
	Dado três valores, A, B e C, construa um programa em C para verificar se
estes valores podem ser valores dos lados de um triangulo.
*/

int main(void){
	int num1, num2, num3;
	
	printf("Digite o primeiro numero (A): ");
	scanf("%d", &num1);
	printf("Digite o segundo numero (B): ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero (C): ");
	scanf("%d", &num3);
	
	
	if ((num1 < (num2 + num3)) && (num2 < (num1 + num3)) && (num3 < (num1 + num2)))
		printf("Os valores %d, %d e %d podem ser valores para lados de um triangulo", num1, num2, num3);
	else
		printf("Os valores %d, %d e %d NAO podem ser valores para lados de um triangulo", num1, num2, num3);
	
	return 0;
}