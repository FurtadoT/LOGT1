#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO     170141-X

    EXERCÍCIO 3
        Crie uma estrutura representando os alunos do curso de Lógica de Programação.
    A estrutura deve conter o RA do aluno, nome, nota da primeira prova,
    nota da segunda prova e nota da terceira prova.

        Permita ao usuário entrar com os dados de 5 alunos.
        Encontre o aluno com maior nota da primeira prova.
        Encontre o aluno com maior média geral.
        Encontre o aluno com menor média geral
        Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/

#define ALUNOS 5

typedef struct str_Alunos alunos_t;
struct str_Alunos{
    char nome[50];
    char RA[10];
    double n1, n2, n3;
};

int main(void){
    alunos_t alunos[ALUNOS];
    int contadorA, maiorP1, maiorMedia, menorMedia;
    double mediaAux;

    for (contadorA = 0; contadorA < ALUNOS; contadorA++){
        printf("ALUNO %d\n", contadorA+1);

        printf("\tDigite o nome: ");
        fflush(stdin);
        gets(alunos[contadorA].nome);

        printf("\tDigite o RA: ");
        fflush(stdin);
        gets(alunos[contadorA].RA);

        printf("\tDigite a nota da primeira prova: ");
        fflush(stdin);
        scanf("%lf", &alunos[contadorA].n1);

        printf("\tDigite a nota da segunda prova: ");
        scanf("%lf", &alunos[contadorA].n2);

        printf("\tDigite a nota da terceira prova: ");
        scanf("%lf", &alunos[contadorA].n3);

        mediaAux = (alunos[contadorA].n1 + alunos[contadorA].n2 + alunos[contadorA].n3)/3;
        if (contadorA == 0)
            maiorP1 = maiorMedia = menorMedia = contadorA;
        else{
            if (alunos[contadorA].n1 > alunos[maiorP1].n1)
                maiorP1 = contadorA;
            if (mediaAux > ((alunos[maiorMedia].n1 + alunos[maiorMedia].n2 + alunos[maiorMedia].n3)/3))
                maiorMedia = contadorA;
            else if (mediaAux < ((alunos[menorMedia].n1 + alunos[menorMedia].n2 + alunos[menorMedia].n3)/3))
                menorMedia = contadorA;
        }
    }

    for (contadorA = 0; contadorA < ALUNOS; contadorA++){
        printf("\n\nPESSOA %d\n", contadorA+1);
        printf("\tNome: %s\n", alunos[contadorA].nome);
        printf("\tRA: %s\n", alunos[contadorA].RA);
        mediaAux = (alunos[contadorA].n1 + alunos[contadorA].n2 + alunos[contadorA].n3)/3;
        printf("\tMedia do aluno: %.2lf. ", mediaAux);
        printf("Situacao: ");
        if (mediaAux >=6)
            printf("APROVADO");
        else
            printf("REPROVADO");
    }

    printf("\n\nAluno com maior nota na P1: %s\nAluno com maior media geral: %s\nAluno com menor media geral: %s", alunos[maiorP1].nome, alunos[maiorMedia].nome, alunos[menorMedia].nome);

    return 1;
}
