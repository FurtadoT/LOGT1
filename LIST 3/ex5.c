#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERC�CIO 5.
	Uma livraria est� fazendo uma promo��o para pagamento a vista. O comprador pode escolher entre dois crit�rios para pagamento:

    Crit�rio A: R$ 0,25 por livro + R$ 7,50 fixo
    Crit�rio B: R$ 0,50 por livro + R$ 2,50 fixo

	Fa�a um algoritmo que o usu�rio informa a quantidade de livros e o algoritmo informa qual o crit�rio de pagamento o cliente deve escolher
*/

int main(void){
	int livros;
	double valor1, valor2;
	
	printf("Digite a quantidade de livros: ");
	scanf("%d", &livros);
	
	valor1 = 0.25 * livros + 7.5;
	valor2 = 0.50 * livros + 2.5;
	
	if (valor1 < valor2)
		printf("O melhor criterio de pagamento e o A no valor de %.2lf.", valor1);
	else
		printf("O melhor criterio de pagamento e o B no valor de %.2lf.", valor2);
	
	return 0;
}