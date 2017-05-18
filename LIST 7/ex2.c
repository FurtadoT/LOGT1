#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 2
    Modifique o ex.1 para encontrar o maior elemento.
*/

int main(void){
    int contadorA, contadorB, matrizA[4][5], maior;
    double valores = 0;

	srand(time(NULL));

    for (contadorA = 0; contadorA < 4; contadorA++){
        for (contadorB = 0; contadorB < 5; contadorB++){
            matrizA[contadorA][contadorB] = rand()%10;

            if (contadorA == 0 && contadorB == 0)
                maior = matrizA[contadorA][contadorB];
            else if (matrizA[contadorA][contadorB] > maior)
                maior = matrizA[contadorA][contadorB];

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
    printf("MAIOR VALOR: %.d\n", maior);

    return 1;
}
