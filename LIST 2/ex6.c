#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 6.
    O Cardápio de uma lanchonete é o seguinte:

    Especificação	Código	Preço
    Cachorro Quente	   100   1.20
    Bauru Simples	   101 	 1.30
    Bauru com ovo	   102   1.50
    Hambúrguer	       103	 1.20
    Cheeseburguer	   104	 1.30
    Refrigerante	   105	 1.00

    Implemente um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. Use o comando switch.
*/

int main(void){
    int cod, quantidade;
    double valorFinal;

    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (cod){
        case 100:
            valorFinal = quantidade * 1.2;
            break;
        case 101:
            valorFinal = quantidade * 1.3;
            break;
        case 102:
            valorFinal = quantidade * 1.5;
            break;
        case 103:
            valorFinal = quantidade * 1.2;
            break;
        case 104:
            valorFinal = quantidade * 1.3;
            break;
        case 105:
            valorFinal = quantidade * 1.0;
            break;
    }

    printf("O valor total e: %.2lf", valorFinal);
}
