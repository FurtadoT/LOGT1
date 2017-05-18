#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 4.
    Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = PI * R² * h, onde PI = 3.141592.
*/

int main(void){
    double h, R;

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &h);
    printf("Digite o raio do cilindro: ");
    scanf("%lf", &R);

    printf("O volume do cilindro eh: %.2lf", (acos(-1) * R * R * h));

    return 1;
}
