#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 5.
	Construir um programa em C que leia dois n�meros e efetue a adi��o. Caso o
valor somado seja maior que 20, este dever� ser apresentado somando-se a
ele mais 8; caso o valor somado seja menor ou igual a 20, este dever� ser
apresentado subtraindo-se 5.
*/

int main(void){
	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if (num1 + num2 > 20)
		printf("A soma dos numeros +8 resulta em: %d", num1+num2+8);
	else
		printf("A soma dos numeros -5 resulta em: %d", num1+num2-5);
	
	return 0;
}