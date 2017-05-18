#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 5.
	Uma livraria está fazendo uma promoção para pagamento a vista. O comprador pode escolher entre dois critérios para pagamento:

    Critério A: R$ 0,25 por livro + R$ 7,50 fixo
    Critério B: R$ 0,50 por livro + R$ 2,50 fixo

	Faça um algoritmo que o usuário informa a quantidade de livros e o algoritmo informa qual o critério de pagamento o cliente deve escolher
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