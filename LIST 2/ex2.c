#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 2.
    Escreva um programa que leia um número de 1 a 7 e escreva o dia da semana correspondente.
*/

int main(void){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O dia da semana correspondente e: ");

    switch(num){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terca");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Numero invalido.");
            break;
    }
}
