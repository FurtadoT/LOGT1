#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X
    11.05

    EXERCÍCIO 5
*/

//Assumindo um MAX alunos por turma para não utilizar malloc
#define MAX 40

int main(void){
    int notaAlunos[MAX][2], contadorA, numeroAlunos, nAprovados = 0, nReprovados = 0, nAltas = 0, nBaixas = 0;
    double media, mediaTurma = 0;

    printf("Digite a quantidade de alunos(no maximo %d): ", MAX);
    scanf("%d", &numeroAlunos);

    for (contadorA = 0; contadorA < numeroAlunos; contadorA++){
        printf("Digite a primeira nota do aluno %d: ", contadorA+1);
        scanf("%d", &notaAlunos[contadorA][1]);
        if (notaAlunos[contadorA][1] > 9)
            nAltas++;
        else if (notaAlunos[contadorA][1] < 2)
            nBaixas++;
        printf("Digite a segunda nota do aluno %d: ", contadorA+1);
        scanf("%d", &notaAlunos[contadorA][2]);
        if (notaAlunos[contadorA][2] > 9)
            nAltas++;
        else if (notaAlunos[contadorA][2] < 2)
            nBaixas++;
    }

    printf("\n\nRELATORIO DE NOTAS\n\n");
    for (contadorA = 0; contadorA < numeroAlunos; contadorA++){
        media = (notaAlunos[contadorA][1] + notaAlunos[contadorA][2]) / 2.0;
        mediaTurma += media;
        printf("Aluno %d:\n\tNota final: %.2lf;\n\tSituacao: ", contadorA+1, media);

        if (media >= 6){
            printf("Aprovado.");
            nAprovados++;
        } else{
            printf("Reprovado.");
            nReprovados++;
        }

        printf("\n");
    }

    printf("\n\nMedia final da turma: %.2lf;\n", (double)mediaTurma/numeroAlunos);
    printf("Percentual de alunos aprovados: %.2lf;\n", (double)nAprovados/numeroAlunos * 100);
    printf("Percentual de alunos reprovados: %.2lf;\n", (double)nReprovados/numeroAlunos * 100);
    printf("Notas acima de 9: %d;\n", nAltas);
    printf("Notas abaixo de 2: %d.\n", nBaixas);

    return 1;
}
