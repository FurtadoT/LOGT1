#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 4.
    Faça um programa para resolver equações do 2o grau. (para calcular a raiz quadrada use a função sqrt, da biblioteca math.h)
*/

int main(void){
    int n1, n2, n3;
    double delta, x1, x2;

    printf("Digite a: ");
    scanf("%d", &n1);
    printf("Digite b: ");
    scanf("%d", &n2);
    printf("Digite c: ");
    scanf("%d", &n3);

    delta = (n2 * n2) - (4 * n1 * n3);
    if (delta > 0){
        x1 = ((n2 * (-1)) + sqrt(delta))/(2 * n1);
        x2 = ((n2 * (-1)) - sqrt(delta))/(2 * n1);
        printf("Os valores das raizes sao: %.2lf e %.2lf", x1, x2);
    }else if (delta == 0){
        x1 = x2 = (n2 * (-1))/(2 * n1);
        printf("O valor da raiz e: %.2lf", x1);
    }
    else
        printf("Nao ha raizes reais");
}
