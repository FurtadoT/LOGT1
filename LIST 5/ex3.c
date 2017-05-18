#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 3.
    Leia uma temperatura bem graus Fahrenheit e apresente-a convertida em graus Celsius. A  fórmula de conversão é C = (5 * (F - 32)) / 9 , sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.
*/

int main(void){
    double temp;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &temp);

    printf("A temperatura em Celsius eh: %.2lf", (5.0 * (temp - 32) / 9));

    return 1;
}
