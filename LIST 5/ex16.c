#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 16.
    Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2 fornecidos pelo usuário via teclado. O programa fica pedindo estes valores e calculando até que o usuário entre com um valor para resistência igual a zero.
*/

int main(void){
    double R1, R2, resistencia;
    int aux = 0;

    do{
        if (aux > 0){
            resistencia = (R1 * R2) / (R1 + R2);

            printf("Resistencia em paralelo de %.2lf e %.2lf equivale a: %.2lf\n\n", R1, R2, resistencia);
        }

        printf("Digite R1: ");
        scanf("%lf", &R1);
        printf("Digite R2: ");
        scanf("%lf", &R2);
        aux++;
    } while((R1 != 0) && (R2 != 0));

    return 1;
}
