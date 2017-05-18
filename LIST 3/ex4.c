#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 4.
	Sejam S e H respectivamente o sexo e a altura de uma pessoa e assuma que o peso médio ideal de um indivíduo seja dado pelas seguintes fórmulas:
	
	Homens: (72.7 * H) – 58
	
	Mulheres: (62.1 * H) – 44.7
	
	    Utilizando seleções simples, faça um algoritmo que tome S e H como entradas e então calcule e escreva o peso médio ideal do indivíduo.
	    Refaça o algoritmo acima utilizando uma seleção composta.

*/

int main(void){
	char S;
	double H;
	
	printf("Digite o sexo (M/F): ");
	scanf("%c", &S);
	
	printf("Digite a altura: ");
	scanf("%lf", &H);
	
	printf("O peso medio ideal e: ");
	if (S == 'M')
		printf("%.2lf.", ((H * 72.7) - 58));
	else
		printf("%.2lf.", ((H * 62.1) - 44.7));
	
	
	return 0;
}