#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 1.
    Fa�a um programa que leia um n�mero real e imprima o quadrado desse n�mero.
*/

int main(void){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O quadrado desse numero eh: %.0lf", ((double)num * num));

    return 1;
}
