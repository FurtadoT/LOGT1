#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 15.
    Determine se um determinado ano lido � bissexto. Sendo que um ano � bissexto se for divis�vel por 400 ou se for divis�vel por 4 e n�o for divis�vel por 100. Por exemplo: 1988, 1992, 1996
*/

int main(void){
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0)
        printf("\nO ano %d e bissexto\n", ano);
    else
        printf("\nO ano %d nao e bissexto\n", ano);

    return 1;
}
