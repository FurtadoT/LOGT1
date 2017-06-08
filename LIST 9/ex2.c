#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 1.

        Escreva um programa que crie um vetor de inteiro, onde a quantidade de
    elementos é fornecido pelo usuário (máximo de 100 posições).
        Crie 3 funções, sendo uma para gerar valores aleatórios para o vetor, outra
    para exibir o conteúdo do vetor e outra para calcular a média dos elementos do
    vetor. Lembre-se que a média é um valor real
*/

#define MAX 100

void addRandomValues(int *v_Int, int tamanhoV);
void printValues(int *v_Int, int tamanhoV);
double calcMedia(int *v_Int, int tamanhoV);

int main(void){
    int v_Int[MAX], tamanhoV;
    srand(time(NULL));

    do{
        printf("Digite o tamanho do vetor (MAXIMO DE 100): ");
        scanf("%d", &tamanhoV);
    } while (tamanhoV > 100 || tamanhoV < 0);

    addRandomValues(v_Int, tamanhoV);
    printValues(v_Int, tamanhoV);
    printf("\n\nMEDIA DOS VALORES: %.2lf\n\n", calcMedia(v_Int, tamanhoV));

    return 1;
}

void addRandomValues(int *v_Int, int tamanhoV){
    int contadorA;

    for (contadorA = 0; contadorA < tamanhoV; contadorA++)
        v_Int[contadorA] = rand();
}

void printValues(int *v_Int, int tamanhoV){
    int contadorA;

    printf("\n\nVALORES DO VETOR: \n\n\t");
    for (contadorA = 0; contadorA < tamanhoV; contadorA++){
        printf("%d", v_Int[contadorA]);
        if (contadorA+1 != tamanhoV)
            printf(", ");
    }

    printf(".");
}

double calcMedia(int *v_Int, int tamanhoV){
    int contadorA;
    double mediaV = 0;

    for (contadorA = 0; contadorA < tamanhoV; contadorA++)
        mediaV += v_Int[contadorA];

    return mediaV/tamanhoV;
}
