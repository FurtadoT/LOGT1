#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTUÁRIO: 170141-X

    ATIVIDADE 1:
        Escreva um programa para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos.
    Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
*/
int main(int argc, const char * argv[]){
    float eleitores, vBranco, vNulo, vValido;

    //Eleitores
    printf("Digite o numero de eleitores: ");
    scanf("%f", &eleitores);

    //Votos
        //brancos
    printf("Digite o numero de votos brancos: ");
    scanf("%f", &vBranco);
        //nulos
    printf("Digite o numero de votos nulos: ");
    scanf("%f", &vNulo);
        //válidos
    printf("Digite o numero de votos validos: ");
    scanf("%f", &vValido);

    //Cálculo do percentual de cada voto em relação ao número de eleitores e impressão em tela
    printf("O percentual de votos brancos, nulos e validos, respectivamente, e: %.2f, %.2f e %.2f", (vBranco*100/eleitores), (vNulo*100/eleitores), (vValido*100/eleitores));
}
