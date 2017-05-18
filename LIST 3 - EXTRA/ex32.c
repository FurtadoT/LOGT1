#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
	EXERCÍCIO 32.
	Dados três valores A, B e C, construa um programa em C para verificar se
estes valores podem ser valores dos lados de um triangulo, e se for um
triangulo retângulo, determinar (imprimir) os seus ângulos internos.
*/

int main(void){
    int ;
    double n1, n2, n3, aux, pi = acos(-1), angle1, angle2, angle3, area, soma, raio;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%lf", &n1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%lf", &n2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%lf", &n3);

	//INÍCIO ORDENAÇÃO (EM ORDEM DECRESCENTE [N1, N2, N3]) DOS LADOS DO TRIÂNGULO
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
	
	//INICIO CÁLCULO DE INFORMAÇÕES PARA ENCONTRAR O ÂNGULO
	soma = (n1 + n2 + n3) / 2;
	area = sqrt(soma * (soma - n1) * (soma - n2) * (soma - n3));
	raio = (n1 * n2 * n3) / (4 * area);
	//FIM
	
	if ((n1 < (n2 + n3)) && (n2 < (n1 + n3)) && (n3 < (n1 + n2))){ //Verifica se os valores podem ser lados de um triangulo
	    angle1 = (180 / pi) * asin(n1 / (2 * raio));
	    angle2 = (180 / pi) * asin(n2 / (2 * raio));
	    angle3 = (180 / pi) * asin(n3 / (2 * raio));
	    if (angle1 == 90)
	    	printf("Os angulos do triangulo retangulo sao: %.2lf, %.2lf e %.2lf", angle1, angle2, angle3);
	    else
	    	printf("Nao e um triangulo retangulo.");
	} else{
		printf("Os valores nao correspondem a um triangulo.");
	}
	
	return 0;
}