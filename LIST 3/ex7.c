#include <stdlib.h>
#include <stdio.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERC�CIO 7.
	Fa�a um algoritmo que receba tr�s valores A, B e C e verifica se eles podem ser os comprimentos dos lados de um tri�ngulo. Se forem, mostrar se � um tri�ngulo equil�tero, is�sceles ou escaleno. Considere que:

	Para ser tri�ngulo: cada lado � menor que a soma dos outros dois lados.
	
	Tri�ngulo equil�tero: tem tr�s lados s�o iguais.
	
	Tri�ngulo is�sceles: tem dois lados iguais e um diferente Tri�ngulo escaleno: tem tr�s lados diferentes
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
