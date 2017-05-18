#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 9.
    Fa�a um algoritmo que calcule a  m�dia ponderada das notas de 3 provas. A primeira e a segunda prova t�m peso 1 e a terceira tem peso 2. Ao final, mostrar a m�dia do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprova��o deve ser igual ou superior a 6 pontos.
*/

int main(void){
    double p1, p2, p3, media;

    printf("Digite a nota da P1: ");
    scanf("%lf", &p1);
    printf("Digite a nota da P2: ");
    scanf("%lf", &p2);
    printf("Digite a nota da P3: ");
    scanf("%lf", &p3);

    media = (p1 + p2 + p3 + p3) / 4.0;

    if (media >= 6)
        printf("O aluno foi aprovado com media %.2lf", media);
    else
        printf("O aluno foi reprovado com media %.2lf", media);

    return 1;
}


