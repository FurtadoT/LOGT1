#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTU�RIO: 170141-X

    ATIVIDADE 3:
        O custo de um carro novo ao consumidor � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
    Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de f�brica de um carro, calcular e escrever o custo final ao consumidor.
*/
int main(int argc, const char * argv[]){
    double cFabrica, pDist = 28, pImposto = 45;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%lf", &cFabrica);

    printf("O valor do carro novo e: %.2lf", (cFabrica + (cFabrica*pDist/100) + (cFabrica*pImposto/100)));
}
