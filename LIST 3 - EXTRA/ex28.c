#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 28.
	Um comerciante calcula o valor da venda, tendo em vista a tabela a seguir:

		Valor < R$ 10,00				Lucro de 70%
		R$ 10,00 <= Valor < R$ 30,00	Lucro de 50%
		R$ 30,00 <= Valor < R$ 50,00	Lucro de 40%
		Valor >= R$ 50,00				Lucro de 30%

	Criar um programa em C que leia o valor da compra e imprima o valor da venda.
*/

int main(void){
	double vCompra;
	
	printf("Digite o valor da compra: ");
	scanf("%lf", &vCompra);
	
	printf("O valor da venda sera de ");
	if (vCompra < 10)
		printf("%.2lf reais.", (vCompra * 1.7));
	else if (vCompra < 30)
		printf("%.2lf reais.", (vCompra * 1.5));
	else if (vCompra < 50)
		printf("%.2lf reais.", (vCompra * 1.4));
	else
		printf("%.2lf reais.", (vCompra * 1.3));
	
	return 0;
}