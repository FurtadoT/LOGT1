#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 6.
    Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas trabalhadas no m�s. Imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o valor calculado.
*/

int main(void){
    double vHora, horas;

    printf("Digite o valor da hora: ");
    scanf("%lf", &vHora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &horas);

    printf("O total a pagar sera de: %.2lf", (vHora * horas * 1.1));

    return 1;
}

