#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 20.
    Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores.
*/

int main(void){
    int num, contadorA;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nOs divisores de %d sao: {", num);
    for (contadorA = 1; contadorA <= num; contadorA++){
        if (num % contadorA == 0){
            printf("%d", contadorA);
            if (contadorA+1 <= num)
                printf(", ");
        }
    }
    printf("}.\n");

    return 1;
}
