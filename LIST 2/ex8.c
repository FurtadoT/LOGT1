#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 8.
    Construa um algoritmo em C que determine (imprima) se um dado n�mero N inteiro (recebido atrav�s do teclado) � PAR ou �MPAR.
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

