#include <stdlib.h>
#include <stdio.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 7.
	Faça um algoritmo que receba três valores A, B e C e verifica se eles podem ser os comprimentos dos lados de um triângulo. Se forem, mostrar se é um triângulo equilátero, isósceles ou escaleno. Considere que:

	Para ser triângulo: cada lado é menor que a soma dos outros dois lados.
	
	Triângulo equilátero: tem três lados são iguais.
	
	Triângulo isósceles: tem dois lados iguais e um diferente Triângulo escaleno: tem três lados diferentes
*/

int main(void){
    int n1, n2, n3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &n1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &n2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &n3);

	if ((n1 < (n2 + n3)) && (n2 < (n1 + n3)) && (n3 < (n1 + n2))){
	    printf("O triangulo e: ");
	    if ((n1 == n2) && (n1 == n3))
	        printf("Equilatero");
	    else{
	        if ((n1 == n2) || (n2 == n3))
	            printf("Isosceles");
	        else
	            printf("Escaleno");
	    }
	} else{
		printf("Os valores nao correspondem a um triangulo.");
	}
	
	return 0;
}
