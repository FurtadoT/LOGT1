#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X
    11.05

    EXERCÍCIO 1
*/

int main(void){
    int valores[10], maior, contadorA, indiceMaior;

    for (contadorA = 0; contadorA < 10; contadorA++){
        printf("Digite o %d valor: ", contadorA+1);
        scanf("%d", &valores[contadorA]);
        if (contadorA == 0){
            maior = valores[contadorA];
            indiceMaior = contadorA;
        } else if (maior < valores[contadorA]){
            maior = valores[contadorA];
            indiceMaior = contadorA;
        }
    }

    printf("\nO maior valor e: %d\n\n", maior);
    printf("Os outros valores e sua diferenca para o maior:\n\n");

    for (contadorA = 0; contadorA < 10; contadorA++){
        if (contadorA != indiceMaior)
            printf("Valor %d: %d. Diferenca para o maior: %d\n", contadorA+1, valores[contadorA], maior - valores[contadorA]);
    }

    return 1;
}
