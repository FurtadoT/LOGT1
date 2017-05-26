#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO     170141-X

    EXERCÍCIO 5
        Faça um programa para corrigir provas de um concurso. Para cada candidato,
    deve-se armazenar nome e as respostas das 15 questões (alternativas a, b, c, d ou e).

            Cadastre 15 candidatos.
            Em seguida, cadastrar o gabarito e corrigir as provas.
            Ao final, imprimir a pontuação de cada candidato.
*/

#define CANDIDATOS 15
#define QUESTOES 15

typedef struct str_Provas provas_t;
struct str_Provas{
    char nome[50];
    char gabarito[15];
    int acertos;
};

int main(void){
    provas_t provas[CANDIDATOS+1];
    int contadorA, contadorB;

    for (contadorA = 0; contadorA < CANDIDATOS; contadorA++){
        printf("GABARITO DO CANDIDATO %d\n", contadorA+1);
        for (contadorB = 0; contadorB < QUESTOES; contadorB++){
            printf("\tDigite a resposta da questao %d (a, b, c, d ou e): ", contadorB+1);
            fflush(stdin);
            scanf("%c", &provas[contadorA].gabarito[contadorB]);
        }
        printf("\n\n");
    }

    printf("GABARITO OFICIAL\n");
    for (contadorB = 0; contadorB < QUESTOES; contadorB++){
        printf("\tDigite a resposta da questao %d (a, b, c, d ou e): ", contadorB+1);
        fflush(stdin);
        scanf("%c", &provas[CANDIDATOS].gabarito[contadorB]);
    }

    printf("\n\nACERTOS");
    for (contadorA = 0; contadorA < CANDIDATOS; contadorA++){
        provas[contadorA].acertos = 0;
        for (contadorB = 0; contadorB < QUESTOES; contadorB++){
            if (provas[contadorA].gabarito[contadorB] == provas[CANDIDATOS].gabarito[contadorB])
                provas[contadorA].acertos++;
        }
        printf("\n\tCANDIDATO %d: %d", contadorA+1, provas[contadorA].acertos);
    }

    return 1;
}
