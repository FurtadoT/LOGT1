#include <stdio.h>
#include <stdlib.h>

/*
	EXERCÍCIO 27.
	Escreva um programa em C que leia as duas notas bimestrais de um aluno e
determine a media das notas semestral. Através da media calculada o
algoritmo deve imprimir a seguinte mensagem: “Aprovado”, “Reprovado” ou
em “Exame” (a media é 7 para Aprovação, menor que 3 para Reprovação e as
demais em Exame).
*/

int main(void){
	float nota1, nota2, media;
	
	printf("Digite sua nota do primeiro bimestre: ");
	scanf("%f", &nota1);
	printf("Digite sua nota do segundo bimestre: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("Sua media e %.2f e voce esta ", media);
	if (media < 3)
		printf("REPROVADO.");
	else if (media >= 7)
		printf("APROVADO.");
	else
		printf("de EXAME.");
	
	return 0;
}