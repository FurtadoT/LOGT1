#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 2.
	Construa um programa em C que leia dois valores num�ricos inteiros e
efetue a adi��o; caso o resultado seja maior que 10, apresent�-lo.
*/

int main(void){
	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if (num1 + num2 > 10)
		printf("A soma dos numeros resulta em: %d", num1+num2);
	
	return 0;
}