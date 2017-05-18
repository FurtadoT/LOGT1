#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 22.
	A CEF concederá um credito especial com juros de 2% aos seus clientes de
acordo com o saldo médio no ultimo ano. Fazer um programa em C que leia o
saldo médio de um cliente e calcule o valor do credito de acordo com a
tabela a seguir. Imprimir uma mensagem informando o saldo médio e o valor
de credito.

	De 0 a 500		Nenhum crédito
	De 501 a 1000	30% do valor do saldo médio
	De 1001 a 3000	40% do valor do saldo médio
	Acima de 3001	50% do valor do saldo médio
*/

int main(void){
	double saldo, credito;
	
	printf("Digite seu saldo medio: ");
	scanf("%lf", &saldo);
	
	if (saldo <= 500)
		credito = 0;
	else if (saldo <= 1000)
		credito = saldo * 0.3;
	else if (saldo <= 3000)
		credito = saldo * 0.4;
	else
		credito = saldo * 0.5;
	
	printf("O saldo medio e o valor do credito, respectivamente, sao: %.2lf, %.2lf", saldo, credito);
		
	return 0;
}