#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 18.
    Faça um programa que receba dois números. Calcule e mostre:
        a soma dos números pares desse intervalo de números, incluindo os números digitados;
        a multiplicação dos números ímpares desse intervalo, incluindo os digitados;
*/

int main(void){
    int n1, n2, soma = 0, contadorA;
    double mult = 1;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //Ordenar maior n2 e menor n1
    if (n2 < n1){
        n2 += n1;
        n1 = n2 - n1;
        n2 -= n1;
    }

    for (contadorA = n1; contadorA <= n2; contadorA++){
        if (contadorA % 2 == 0)
            soma += contadorA;
        else
            mult *= contadorA;
    }

    printf("\nA soma dos numeros pares no intervalo [%d, %d] resulta em: %d\n", n1, n2, soma);
    printf("A multiplicacao dos numeros impares no intervalo [%d, %d] resulta em: %.0lf\n", n1, n2, mult);

    return 1;
}
