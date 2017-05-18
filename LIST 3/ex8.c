#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 8.
	Faça um algoritmo que receba o preço atual e a quantidade média de venda de um produto, calcule e mostre o novo preço.
*/

int main(void){
	double precoAtual, percAlterar = 1;
	int qtdVendida;
	
	printf("Digite o preco atual do produto: ");
	scanf("%lf", &precoAtual);
	
	printf("Digite a quantidade medida de vendas desse produto: ");
	scanf("%d", &qtdVendida);
	
	if (qtdVendida >= 1200){
		if (precoAtual >= 180)
			percAlterar = 0.8;
	} else if (qtdVendida >= 500){
		if ((precoAtual >= 45) && (precoAtual < 180))
			percAlterar = 1.15;
	} else{
		if (precoAtual < 45)
			percAlterar = 1.1;
	}
	
	printf("O preco final do produto sera: %.2lf reais", precoAtual * percAlterar);
	
	return 0;
}