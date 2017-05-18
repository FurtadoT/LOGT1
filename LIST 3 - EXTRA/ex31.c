#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
	EXERC�CIO 31.
	Dados tr�s valores A, B e C, construa um programa em C para verificar se
estes valores podem ser valores dos lados de um triangulo, e se for, classific�-
los (imprimi-los) segundo os �ngulos. (Triangulo Ret�ngulo = 90o, Triangulo
Obtus�ngulo > 90o , Triangulo Acut�ngulo < 90o)
*/

int main(void){
    int ;
    double n1, n2, n3, aux, pi = acos(-1), angle, area, soma, raio;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%lf", &n1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%lf", &n2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%lf", &n3);

	//IN�CIO ORDENA��O (EM ORDEM DECRESCENTE [N1, N2, N3]) DOS LADOS DO TRI�NGULO
	if (n1 < n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}	
	if (n2 < n3){
		aux = n2;
		n2 = n3;
		n3 = aux;
	}
	if (n1 < n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	//FIM
	
	//INICIO C�LCULO DE INFORMA��ES PARA ENCONTRAR O �NGULO
	soma = (n1 + n2 + n3) / 2;
	area = sqrt(soma * (soma - n1) * (soma - n2) * (soma - n3));
	raio = (n1 * n2 * n3) / (4 * area);
	//FIM
	
	if ((n1 < (n2 + n3)) && (n2 < (n1 + n3)) && (n3 < (n1 + n2))){ //Verifica se os valores podem ser lados de um triangulo
	    printf("O triangulo e um triangulo ");
	    angle = (180 / pi) * asin(n1 / (2 * raio));
	    if (angle == 90)
	    	printf("retangulo");
	    else if (angle > 90)
	    	printf("obtusangulo");
	    else
	    	printf("acutangulo");
	} else{
		printf("Os valores nao correspondem a um triangulo.");
	}
	
	return 0;
}