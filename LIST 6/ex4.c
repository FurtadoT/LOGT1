#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X
    11.05

    EXERCÍCIO 4
*/

//Assumindo um MAX alunos por turma para não utilizar malloc
#define MAX 40

int main(void){
    int notaAlunos[MAX][2], contadorA, numeroAlunos;
    double media, mediaTurma = 0;

    printf("Digite a quantidade de alunos(no maximo %d): ", MAX);
    scanf("%d", &numeroAlunos);

    for (contadorA = 0; contadorA < numeroAlunos; contadorA++){
        printf("Digite a primeira nota do aluno %d: ", contadorA+1);
        scanf("%d", &notaAlunos[contadorA][1]);
        printf("Digite a segunda nota do aluno %d: ", contadorA+1);
        scanf("%d", &notaAlunos[contadorA][2]);
    }

    printf("\n\nRELATORIO DE NOTAS\n\n");
    for (contadorA = 0; contadorA < numeroAlunos; contadorA++){
        media = (notaAlunos[contadorA][1] + notaAlunos[contadorA][2]) / 2.0;
        mediaTurma += media;
        printf("Aluno %d:\n\tNota final: %.2lf;\n\tSituacao: ", contadorA+1, media);

        if (media >= 6)
            printf("Aprovado.");
        else
            printf("Reprovado.");

        printf("\n");
    }

    printf("\nMedia final da turma: %.2lf\n", mediaTurma/numeroAlunos);

    return 1;
}
