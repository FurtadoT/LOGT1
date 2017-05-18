#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERC�CIO 4.
	Sejam S e H respectivamente o sexo e a altura de uma pessoa e assuma que o peso m�dio ideal de um indiv�duo seja dado pelas seguintes f�rmulas:
	
	Homens: (72.7 * H) � 58
	
	Mulheres: (62.1 * H) � 44.7
	
	    Utilizando sele��es simples, fa�a um algoritmo que tome S e H como entradas e ent�o calcule e escreva o peso m�dio ideal do indiv�duo.
	    Refa�a o algoritmo acima utilizando uma sele��o composta.

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