#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 7.
    Escreva um programa que solicite o sal�rio e o valor de uma presta��o. Se a presta��o  for maior que 20% do salario imprimir: �EMPR�STIMO N�O PODE SER CONCEDIDO�; caso contr�rio imprima: �EMPR�STIMO PODE SER CONCEDIDO�.
*/

int main(void){
    double salario, prestacao;

    printf("Digite o salario: ");
    scanf("%lf", &salario);
    printf("Digite o valor de uma prestacao: ");
    scanf("%lf", &prestacao);

    if (prestacao > (0.2 * salario))
        printf("EMPRESTIMO NAO PODE SER CONCEDIDO");
    else
        printf("EMPRESTIMO PODE SER CONCEDIDO");

    return 1;
}


