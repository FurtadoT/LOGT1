#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTU�RIO: 170141-X

    ATIVIDADE 2:
        Escreva um programa para ler o sal�rio mensal atual de um funcion�rio e o percentual de reajuste.
    Calcular e escrever o valor do novo sal�rio.
*/
int main(int argc, const char * argv[]){
    double salario, pReajuste;

    printf("Digite o salario: ");
    scanf("%lf", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%lf", &pReajuste);

    printf("O valor do novo salario e: %.2lf", (salario*(pReajuste/100 + 1)));
}
