#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 3.
    Faça um programa que receba três valores correspondentes aos lados de um triângulo e identifique se o triângulo é equilátero, isósceles ou escaleno.
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
