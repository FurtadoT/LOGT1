#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 10.
	Construa um programa em C que imprima qual o menor e qual o maior valor
de dois n�meros A e B, lidos atrav�s do teclado.
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
	
	printf("O maior numero e o %d e o menor %d", num1, num2);
	
	return 0;
}