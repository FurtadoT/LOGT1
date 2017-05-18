#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 14.
	Dados três valores A, B e C, construa um programa em C, que imprima os
valores de forma ascendente (do menor para o maior).
*/

int main(void){
	int num1, num2, num3, aux;
	
	printf("Digite o primeiro numero (A): ");
	scanf("%d", &num1);
	printf("Digite o segundo numero (B): ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero (C): ");
	scanf("%d", &num3);
	
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
	
	printf("A, B e C em ordem crescente fica: %d, %d, %d", num3, num2, num1);
	
	return 0;
}