#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 1.
    Fa�a um programa que receba tr�s n�meros e mostre o maior deles.
*/

int main(void){
    int n1, n2, n3, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("\n O maior desses numeros e o: ");

    maior = n1;
    if (maior < n2)
        maior = n2;
    if (maior < n3)
        maior = n3;

    printf("%d", maior);
}
