#include <stdlib.h>
#include <stdio.h>

/*
	EXERC�CIO 30.
	Dado tr�s valores, A, B e C, construa um programa em C para verificar se
estes valores podem ser valores dos lados de um triangulo, e se for, se � um
triangulo escaleno, um triangulo equil�tero ou um triangulo is�sceles.
*/

int main(void){
    int n1, n2, n3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &n1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &n2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &n3);

	if ((n1 < (n2 + n3)) && (n2 < (n1 + n3)) && (n3 < (n1 + n2))){ //Verifica se os valores podem ser lados de um triangulo
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