#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTU�RIO: 170141-X

    ATIVIDADE 1:
        Escreva um programa para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos.
    Calcular e escrever o percentual que cada um representa em rela��o ao total de eleitores.
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
        //v�lidos
    printf("Digite o numero de votos validos: ");
    scanf("%f", &vValido);

    //C�lculo do percentual de cada voto em rela��o ao n�mero de eleitores e impress�o em tela
    printf("O percentual de votos brancos, nulos e validos, respectivamente, e: %.2f, %.2f e %.2f", (vBranco*100/eleitores), (vNulo*100/eleitores), (vValido*100/eleitores));
}
