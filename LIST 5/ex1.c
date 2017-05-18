#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 1.
    Faça um programa que leia um número real e imprima o quadrado desse número.
*/

int main(void){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O quadrado desse numero eh: %.0lf", ((double)num * num));

    return 1;
}
