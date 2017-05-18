#include <stdio.h>
#include <stdlib.h>

/*
	EXERC�CIO 21.
	Construa um programa em C para determinar se o individuo esta com um
peso favor�vel. Essa situa��o � determinada atrav�s do IMC (�ndice de Massa
Corp�rea), que � definida como sendo a rela��o entre o peso (PESO) e o
quadrado da Altura (ALTURA) do individuo.
	IMC abaixo de 20 Abaixo do peso
	IMC de 20 at� 25 Peso normal
	IMC de 25 at� 30 Sobre peso
	IMC de 30 at� 40 Obeso
	IMC acima de 40 Obeso m�rbido
*/

int main(void){
	double altura, peso, imc;
	
	printf("Digite seu peso (em kg): ");
	scanf("%lf", &peso);
	printf("Digite sua altura (em m): ");
	scanf("%lf", &altura);
	
	imc = peso / (altura * altura);
	
	printf("Seu IMC e %.2lf e esta ", imc);
	if (imc < 20)
		printf("abaixo do peso.");
    else if (imc < 25)
		printf("com o peso normal.");
    else if (imc < 30)
		printf("com sobre peso.");
    else if (imc < 40)
		printf("obeso.");
 	else
		printf("obeso morbido.");
	
	return 0;
}