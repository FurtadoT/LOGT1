#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 13.
	Construa um programa em C que dado quatro valores, A, B, C e D, o
algoritmo imprima o maior e o menor valor.
*/

int main(void){
	int num1, num2, num3, num4, aux;
	
	printf("Digite o primeiro numero (A): ");
	scanf("%d", &num1);
	printf("Digite o segundo numero (B): ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero (C): ");
	scanf("%d", &num3);
	printf("Digite o segundo numero (D): ");
	scanf("%d", &num4);
	
	if (num1 < num2){
		aux = num1;
		num1 = num2;
		num2 = aux;
	}	
	if (num2 < num3){
		aux = num2;
		num2 = num3;
		num3 = aux;
	}	
	if (num3 < num4){
		aux = num3;
		num3 = num4;
		num4 = aux;
	}
	if (num1 < num2){
		aux = num1;
		num1 = num2;
		num2 = aux;
	}	
	if (num2 < num3){
		aux = num2;
		num2 = num3;
		num3 = aux;
	}
	if (num1 < num2){
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	
	printf("O maior e o menor numero sao, respectivamente: %d, %d", num1, num4);
	
	return 0;
}