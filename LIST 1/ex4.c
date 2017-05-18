#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTUÁRIO: 170141-X

    ATIVIDADE 4:
        Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
    Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
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

