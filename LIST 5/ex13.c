#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 13.
    Faça um programa que leia 10 inteiros e imprima sua média.
*/

int main(void){
    int soma = 0, num, contadorA;

    for (contadorA = 0; contadorA < 10; contadorA++){
        printf("Digite o %d numero: ", contadorA+1);
        scanf("%d", &num);
        soma += num;
    }

    printf("\nA media dos numeros resulta em: %.2lf\n", (soma / 10.0));

    return 1;
}
