#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 15.
    Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996
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
