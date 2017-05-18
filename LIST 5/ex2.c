#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 2.
    Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é:  F = (9/5) * C + 32,  sendo  F  a  temperatura  em  Fahrenheit  e  C  a  temperatura  em Celsius.
*/

int main(void){
    double temp;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &temp);

    printf("A temperatura em Fahrenheit eh: %.2lf", ((9.0 * temp / 5) + 32));

    return 1;
}
