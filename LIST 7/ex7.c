#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 7
    Crie um programa que preencha uma matriz A de tamanho 3x3 de números inteiros e verifique se a matriz é simétrica.
    A matriz A será simétrica se e somente se todo elemento A[i][j] = A[j][i].
*/

#define TRUE 1
#define FALSE 0

int main(void){
    int contadorA, contadorB, matrizA[3][3], simetric = TRUE;

    for (contadorA = 0; contadorA < 3; contadorA++){
        for (contadorB = 0; contadorB < 3; contadorB++){
            printf("A[%d][%d] = ", contadorA + 1, contadorB + 1);
            scanf("%d", &matrizA[contadorA][contadorB]);
        }
    }

    printf("\nMATRIZ A:\n");
    for (contadorA = 0; contadorA < 3; contadorA++){
        for (contadorB = 0; contadorB < 3; contadorB++){
            printf("%d ", matrizA[contadorA][contadorB]);
        }
        printf("\n");
    }

    for (contadorA = 0; contadorA < 3; contadorA++){
        for (contadorB = 0; contadorB < 3; contadorB++){
            if (matrizA[contadorA][contadorB] != matrizA[contadorB][contadorA])
                simetric = FALSE;
        }
    }

    if (simetric == TRUE)
        printf("A MATRIZ E SIMETRICA!\n");
    else
        printf("A MATRIZ NAO E SIMETRICA!\n");


    return 1;
}
