#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 11.
    Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não simultaneamente pelos dois.
*/

int main(void){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0)
        if (num % 5 != 0)
            printf("O numero %d e divisivel por 3 e nao por 5.", num);
        else
            printf("O numero %d e divisivel por 3 e por 5", num);
    else
        if (num % 5 == 0)
            printf("O numero %d e divisivel por 5 e nao por 3.", num);
        else
            printf("O numero %d nao e divisivel por 3 e nem por 5", num);


    return 1;
}
