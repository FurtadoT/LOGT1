#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTUÁRIO: 170141-X

    ATIVIDADE 2:
        Escreva um programa para ler o salário mensal atual de um funcionário e o percentual de reajuste.
    Calcular e escrever o valor do novo salário.
*/
int main(int argc, const char * argv[]){
    double salario, pReajuste;

    printf("Digite o salario: ");
    scanf("%lf", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%lf", &pReajuste);

    printf("O valor do novo salario e: %.2lf", (salario*(pReajuste/100 + 1)));
}
