#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 12.
	A prefeitura de Ibaté abriu uma linha de credito para os funcionários estatutários.
	O valor máximo da prestação não poderá ultrapassar 30% do salario bruto.
	Fazer um algoritmo que permita entrar com o salario bruto e o valor da prestação, e informar se o
	empréstimo pode ou não ser concedido.
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