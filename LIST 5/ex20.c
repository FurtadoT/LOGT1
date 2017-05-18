#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 20.
    Faça um algoritmo que leia um número positivo e imprima seus divisores.
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
