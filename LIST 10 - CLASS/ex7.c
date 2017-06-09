#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void){
    int nPalpite, nGerado;
    srand(time(NULL));
    nGerado = rand()%1000 + 1;

    printf("Tenho um numero de 1 a 1000.\nVoce pode adivinhar meu numero?\nPor favor, digite seu primeiro palpite: ");
    scanf("%d", &nPalpite);

    while (nPalpite != nGerado){
        if (nPalpite > nGerado)
            printf("\nMuito alto! Tente novamente: ");
        else
            printf("\nMuito baixo! Tente novamente: ");

        scanf("%d", &nPalpite);
    }

    printf("\nExcelente!!! Voce adivinhou o numero!\n\n");

    return 1;
}
