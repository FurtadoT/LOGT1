#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 3
    Gere valores inteiros em uma matriz 4x4. Imprima a matriz. Encontre a soma dos elementos de cada linha.
*/

int main(void){
    int contadorA, contadorB, matrizA[4][4], soma;

	srand(time(NULL));

    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 4; contadorB++){
            matrizA[contadorA][contadorB] = rand()%10;
        }
    }

    printf("MATRIZ A:\n");
    for (contadorA = 0; contadorA < 4; contadorA++){
        soma = 0;
        for (contadorB = 0; contadorB < 4; contadorB++){
            printf("%d ", matrizA[contadorA][contadorB]);
            soma += matrizA[contadorA][contadorB];
        }
        printf("\t SOMA DA LINHA: %d\n", soma);
    }

    return 1;
}
