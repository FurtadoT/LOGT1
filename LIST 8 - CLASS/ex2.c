#include <stdio.h>
#include <stdlib.h>

#define QTDTURMA 10

typedef struct strAlunos regAlunos_t;
struct strAlunos{
    char nome[40];
    char endereco[50];
    char curso[50];
    int prontuario;
    int idade;
};

int main(void){
    int contadorA, prontuario, indiceP, qtd = 0;
    regAlunos_t turma[QTDTURMA];

    for (contadorA = 0; contadorA < QTDTURMA; contadorA++){
        printf("ALUNO %d\n", contadorA+1);

        printf("\tDigite o prontuario: ");
        scanf("%d", &turma[contadorA].prontuario);

        printf("\tDigite o nome: ");
        fflush(stdin);
        gets(turma[contadorA].nome);

        printf("\tDigite o endereco: ");
        fflush(stdin);
        gets(turma[contadorA].endereco);

        printf("\tDigite o idade: ");
        scanf("%d", &turma[contadorA].idade);

        printf("\tDigite o curso: ");
        fflush(stdin);
        gets(turma[contadorA].curso);

        printf("\n");
    }

    printf("\n\nBUSCA POR PRONTUARIO\n");
    do{
        if (qtd > 0){
            indiceP = -1;
            for (contadorA = 0; contadorA < QTDTURMA; contadorA++){
                if (turma[contadorA].prontuario == prontuario){
                    indiceP = contadorA;
                    break;
                }
            }

            if (indiceP >= 0){
                printf("\nPRONTUARIO DO ALUNO: %d\n", prontuario);
                printf("NOME: %s\n", turma[indiceP].nome);
                printf("IDADE: %d\n", turma[indiceP].idade);
                printf("CURSO: %s\n", turma[indiceP].curso);
                printf("ENDERECO: %s\n\n", turma[indiceP].endereco);
            } else
                printf("\nNAO FOI ENCONTRADO ALUNO COM O PRONTUARIO %d!\n\n", prontuario);
        }
        printf("\nDigite o prontuario do aluno para pesquisar: ");
        scanf("%d", &prontuario);
        qtd++;
    } while (prontuario >= 0);

    return 1;
}
