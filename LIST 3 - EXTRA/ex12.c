#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 12.
	A prefeitura de Ibat� abriu uma linha de credito para os funcion�rios estatut�rios.
	O valor m�ximo da presta��o n�o poder� ultrapassar 30% do salario bruto.
	Fazer um algoritmo que permita entrar com o salario bruto e o valor da presta��o, e informar se o
	empr�stimo pode ou n�o ser concedido.
*/

int main(void){
	double salBruto, parcela;
	
	printf("Digite o salario bruto: ");
	scanf("%lf", &salBruto);
	printf("Digite o valor da parcela: ");
	scanf("%lf", &parcela);
	
	if (parcela <= (salBruto * 0.3))
		printf("E possivel realizar o emprestimo de %.2lf", parcela);
	else
		printf("Nao e possivel realizar o emprestimo de %.2lf", parcela);	
	return 0;
}