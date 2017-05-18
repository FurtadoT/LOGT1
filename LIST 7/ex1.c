#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 1
    Gere valores inteiros em uma matriz 4x5. Imprima a matriz e calcule a média dos valores.
*/

int main(void){
    int contadorA, contadorB, matrizA[4][5];
    double valores = 0;

	srand(time(NULL));

    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 5; contadorB++){
            matrizA[contadorA][contadorB] = rand()%10;
            valores += matrizA[contadorA][contadorB];
        }
    }

    printf("MATRIZ A:\n");
    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 5; contadorB++){
            printf("%d ", matrizA[contadorA][contadorB]);
        }
        printf("\n");
    }

    printf("\nMEDIA DOS VALORES: %.2lf\n", valores/20);

    return 1;
}
