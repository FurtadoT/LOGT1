#include <stdio.h>
#include <stdlib.h>

int dividir(double *resultado, double divisor, double dividendo);

int main(void){
    double divisor, dividendo, resultado;

    printf("Digite o divisor: ");
    scanf("%lf", &divisor);
    printf("Digite o dividendo: ");
    scanf("%lf", &dividendo);

    if (dividir(&resultado, divisor, dividendo) == 1)
        printf("\n\nR = %.2lf/%.2lf = %.2lf\n\n", divisor, dividendo, resultado);
    else
        printf("\n\n\t\t\tOPERACAO INVALIDA!\n\n");

    return 1;
}

int dividir(double *resultado, double divisor, double dividendo){
    if (dividendo == 0)
        return 0;

    *resultado = divisor/dividendo;

    return 1;
}
