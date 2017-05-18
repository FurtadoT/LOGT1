#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 16.
	Construa um programa em C, que receba três valores, A, B e C, e armazene-
os em três variáveis com os seguintes nomes: MAIOR, INTER e MENOR (os
nomes correspondem aos valores ordenados).
*/

int main(void){
	int maior, inter, menor, aux;
	
	printf("Digite o primeiro numero (A): ");
	scanf("%d", &maior);
	printf("Digite o segundo numero (B): ");
	scanf("%d", &inter);
	printf("Digite o terceiro numero (C): ");
	scanf("%d", &menor);
	
	if (maior < inter){
		aux = maior;
		maior = inter;
		inter = aux;
	}	
	if (inter < menor){
		aux = inter;
		inter = menor;
		menor = aux;
	}
	if (maior < inter){
		aux = maior;
		maior = inter;
		inter = aux;
	}
	
	printf("A, B e C em ordem descrescente fica: %d, %d, %d", maior, inter, menor);
	
	return 0;
}