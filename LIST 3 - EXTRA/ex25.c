#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 25.
	A confedera��o brasileira de nata��o ir� promover eliminat�rias para o
pr�ximo mundial. Fazer um programa em C que receba a idade de um
nadador e determine (imprima) a sua categoria segundo a tabela a seguir:

		Infantil A		5 � 7 anos
		Infantil B		8 � 10 anos
		Juvenil A		11 � 13 anos
		Juvenil B		14 � 17 anos
		S�nior			Maiores de 18 anos
*/

int main(void){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade > 4){
		if (idade < 8)
			printf("A sua categoria e: 'Infantil A'");
		else if (idade < 11)
			printf("A sua categoria e: 'Infantil B'");
		else if (idade < 14)
			printf("A sua categoria e: 'Juvenil A'");
		else if (idade < 18)
			printf("A sua categoria e: 'Juvenil A'");
		else
			printf("A sua categoria e: 'Senior'");
	} else
		printf("Voce nao se encaixa em nenhuma categoria");
	
	return 0;
}