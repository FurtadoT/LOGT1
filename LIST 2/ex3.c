#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 3.
    Fa�a um programa que receba tr�s valores correspondentes aos lados de um tri�ngulo e identifique se o tri�ngulo � equil�tero, is�sceles ou escaleno.
*/

int main(void){
    int n1, n2, n3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &n1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &n2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &n3);


    printf("O triangulo e: ");
    if ((n1 == n2) && (n1 == n3))
        printf("Equilatero");
    else{
        if ((n1 == n2) || (n2 == n3))
            printf("Isosceles");
        else
            printf("Escaleno");
    }
}
