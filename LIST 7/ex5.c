#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 5
    Escreva um programa que leia duas matrizes 4x4 e em seguida exiba a soma das matrizes.
*/

int main(void){
    int contadorA, contadorB, matrizA[4][4], matrizB[4][4], matrizC[4][4];

    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 4; contadorB++){
            printf("A[%d][%d] = ", contadorA + 1, contadorB + 1);
            scanf("%d", &matrizA[contadorA][contadorB]);
        }
    }
    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 4; contadorB++){
            printf("B[%d][%d] = ", contadorA + 1, contadorB + 1);
            scanf("%d", &matrizB[contadorA][contadorB]);
        }
    }

    printf("\nMATRIZ A:\n");
    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 4; contadorB++){
            printf("%d ", matrizA[contadorA][contadorB]);
        }
        printf("\n");
    }
    printf("\nMATRIZ B:\n");
    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 4; contadorB++){
            printf("%d ", matrizB[contadorA][contadorB]);
        }
        printf("\n");
    }

    for(contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 4; contadorB++){
            matrizC[contadorA][contadorB] = matrizA[contadorA][contadorB] + matrizB[contadorA][contadorB];
        }
    }
    printf("\nMATRIZ C (A+B):\n");
    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 4; contadorB++){
            printf("%d ", matrizC[contadorA][contadorB]);
        }
        printf("\n");
    }

    return 1;
}
