#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 24.
	Crie um programa em C que leia a idade de uma pessoa e informe a sua
classe eleitoral:
		� - n�o eleitor (abaixo de 16 anos);
		� - eleitor obrigat�rio (entre a faixa de 18 e menor de 65 anos);
		� - eleitor facultativo (de 16 at� 18 anos e maior de 65 anos, inclusive).
*/

int main(void){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 16)
		printf("Nao eleitor");
	else if ((idade < 18) || (idade >= 65))
		printf("Eleitor facultativo");
	else
		printf("Eleitor obrigatorio");
	
	return 0;
}