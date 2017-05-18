#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 8.
    Construa um algoritmo em C que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR.
*/

int main(void){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("O numero %d e par!", num);
    else
        printf("O numero %d e impar!", num);
}

