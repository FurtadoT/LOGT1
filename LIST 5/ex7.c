#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 7.
    Escreva um programa que solicite o salário e o valor de uma prestação. Se a prestação  for maior que 20% do salario imprimir: “EMPRÉSTIMO NÃO PODE SER CONCEDIDO”; caso contrário imprima: “EMPRÉSTIMO PODE SER CONCEDIDO”.
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


