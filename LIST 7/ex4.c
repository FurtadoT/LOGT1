#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 4
    Modifique o ex.3 para encontrar a soma dos elementos de cada coluna.
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
        for (contadorB = 0; contadorB < 4; contadorB++){
            printf("%d ", matrizA[contadorA][contadorB]);
        }
        printf("\n");
    }

    printf("\nSOMA DAS COLUNAS(da esquerda para a direita):\n");
    //Esse for é por coluna (contadorB) diferente dos acima, que são por linhas
    for (contadorB = 0; contadorB < 4; contadorB++){
        soma = 0;
        for (contadorA = 0; contadorA < 4; contadorA++){
            soma += matrizA[contadorA][contadorB];
        }
        printf("%d ", soma);
    }
    printf("\n");

    return 1;
}
