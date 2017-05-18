#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	EXERCÍCIO 20.
	Criar um programa em C que leia dois números e imprimir o quadrado do
menor numero e raiz quadrada do maior numero, se for possível.
*/

int main(void){
	int num1, num2, aux;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if (num2 > num1){
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	
	if (num2 >= 0)
		printf("O quadrado do maior numero e a raiz quadrada do menor, respectivamente, sao: %.2lf, %.2lf", (double)(num1 * num1), sqrt(num2));
	else
		printf("O quadrado do maior numero e: %.2lf. Nao existe numero real para a raiz quadrada do menor numero(%d)", (double)(num1 * num1), num2);
	
	return 0;
}