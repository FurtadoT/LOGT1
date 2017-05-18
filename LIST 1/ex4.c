#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTU�RIO: 170141-X

    ATIVIDADE 4:
        Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo por m�s, mais uma comiss�o tamb�m fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
    Escrever um algoritmo que leia o n�mero de carros por ele vendidos, o valor total de suas vendas, o sal�rio fixo e o valor que ele recebe por carro vendido. Calcule e escreva o sal�rio final do vendedor.
*/
int main(int argc, const char * argv[]){
    double vVendas, salario, comissao, salarioFinal;
    int nCarros;

    printf("Digite a quantidade de carros vendidos: ");
    scanf("%d", &nCarros);

    printf("Digite o valor total das vendas: ");
    scanf("%lf", &vVendas);
    printf("Digite o salario fixo: ");
    scanf("%lf", &salario);
    printf("Digite o valor por carro vendido: ");
    scanf("%lf", &comissao);

    salarioFinal = salario + (comissao * nCarros) + (vVendas*0.05);
    printf("O salario final do funcionario e: %.2lf", salarioFinal);
}

