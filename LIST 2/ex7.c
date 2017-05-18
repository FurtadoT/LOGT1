#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 7.
    Dados três valores A, B e C, construa um algoritmo em C, que imprima os valores de forma crescente (do menor para o maior)
*/

int main(void){
    int n1, n2, n3, aux;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n2 > n3){
        aux = n3;
        if (n1 > n3){
            n3 = n1;
            n1 = aux;
            aux = n3;
        }
        n3 = n2;
        n2 = aux;
    }

    printf("Em ordem crescente: %d, %d, %d", n1, n2, n3);
}
