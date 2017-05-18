#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 14.
    Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

int main(void){
    int soma = 0, contadorA;

    for (contadorA = 2; contadorA <= 100; contadorA += 2){
        soma += contadorA;
    }

    printf("\nA soma dos primeiros cinquenta numeros pares resulta em: %d\n", soma);

    return 1;
}
