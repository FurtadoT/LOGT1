#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int verifWin(char matrizA[][3], char cWON){
    int contadorA, contadorB;

    for (contadorA = 0; contadorA < 3; contadorA++){
        for (contadorB = 0; contadorB < 3; contadorB++){
            //if ()
        }
    }

    return FALSE;
}

int main(void){
    int contadorA, contadorB, contadorC, invalidMove, linha, coluna, winner = FALSE;
    char matrizA[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    for (contadorC = 0; contadorC < 9; contadorC++){
        invalidMove = TRUE;
        do{
            for (contadorA = 0; contadorA < 3; contadorA++){
                printf("*---*---*---*\n");
                for (contadorB = 0; contadorB < 3; contadorB++){
                    printf("| %c ", matrizA[contadorA][contadorB]);
                }
                printf("|\n");
            }
            printf("*---*---*---*\n");

            printf("\n");

            printf("Escolha a linha: ");
            scanf("%d", &linha);
            printf("Escolha a coluna: ");
            scanf("%d", &coluna);

            if (!(linha < 1 || linha > 3 || coluna < 1 || coluna > 3)){
                if (matrizA[linha-1][coluna-1] == ' '){
                    if (contadorC % 2 == 0){
                        matrizA[linha-1][coluna-1] = 'X';
                        //winner = verifWin(matrizA, 'X');
                    } else{
                        matrizA[linha-1][coluna-1] = 'O';
                        //winner = verifWin(matrizA, 'O');
                    }

                    invalidMove = FALSE;
                } else
                    printf("\nLOCAL INVALIDO. TENTE NOVAMENTE:\n");
            } else
                    printf("\nLOCAL INVALIDO. TENTE NOVAMENTE:\n");
        }while (invalidMove);
    }

    printf("\n\nRESULTADO FINAL:\n");
    for (contadorA = 0; contadorA < 3; contadorA++){
        printf("*---*---*---*\n");
        for (contadorB = 0; contadorB < 3; contadorB++){
            printf("| %c ", matrizA[contadorA][contadorB]);
        }
        printf("|\n");
    }
    printf("*---*---*---*\n");
}
