#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	EXERCÍCIO 6.
	Escreva um programa em C que leia um numero e imprima a raiz quadrada
do numero caso ele seja positivo ou igual a zero e o quadrado do numero
caso ele seja negativo.
*/

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num >= 0)
		printf("A raiz quadrada de %d e: %.2lf", num, sqrt(num));
	else
		printf("O quadrado de %d e: %lf", num, (double)(num * num));
	
	return 0;
}