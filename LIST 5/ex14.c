#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 14.
    Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.
*/

int main(void){
    int soma = 0, contadorA;

    for (contadorA = 2; contadorA <= 100; contadorA += 2){
        soma += contadorA;
    }

    printf("\nA soma dos primeiros cinquenta numeros pares resulta em: %d\n", soma);

    return 1;
}
