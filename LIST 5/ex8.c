#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 8.
    Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
*/

int main(void){
    double c, l, p;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%lf", &c);
    printf("Digite a largura do terreno (em metros): ");
    scanf("%lf", &l);
    printf("Digite o preco do metro de tela: ");
    scanf("%lf", &p);

    printf("O custo para cercar o terreno eh de: R$ %.2lf", (((2.0 * c) + (2 * l)) * p));

    return 1;
}


