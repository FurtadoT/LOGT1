#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 26.
	Depois da libera��o do governo para as mensalidades dos planos de sa�de, as
pessoas come�aram a fazer pesquisas para descobrir um bom plano, n�o
muito caro. Um vendedor de um plano de sa�de apresentou a tabela a
seguir. Criar um programa em C que entre com a idade de uma pessoa e
imprima o valor que ela dever� pagar, segundo a seguinte tabela:

		At� 10 anos					R$ 30,00
		Acima de 10 at� 29 anos		R$ 60,00
		Acima de 29 at� 45 anos		R$ 120,00
		Acima de 45 at� 59 anos		R$ 150,00
		Acima de 59 at� 65 anos		R$ 250,00
		Maior que 65 anos			R$ 400,00
*/

int main(void){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 11)
		printf("O valor a ser pago sera de R$ 30,00");
	else if (idade < 30)
		printf("O valor a ser pago sera de R$ 60,00");
	else if (idade < 46)
		printf("O valor a ser pago sera de R$ 120,00");
	else if (idade < 60)
		printf("O valor a ser pago sera de R$ 150,00");
	else if (idade < 66)
		printf("O valor a ser pago sera de R$ 250,00");
	else
		printf("O valor a ser pago sera de R$ 400,00");
	
	return 0;
}