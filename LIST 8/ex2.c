#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO     170141-X

    EXERCÍCIO 2
        Utilizando estrutura, fazer um programa em C que permita a entrada
    de nome, endereço e telefone de 5 pessoas e os imprima.
*/

#define PESSOAS 5

typedef struct str_Pessoas pessoas_t;
struct str_Pessoas{
    char nome[50];
    char endereco[50];
    char telefone[15];
};

int main(void){
    pessoas_t pessoas[PESSOAS];
    int contadorA;

    for (contadorA = 0; contadorA < PESSOAS; contadorA++){
        printf("PESSOA %d\n", contadorA+1);

        printf("\tDigite o nome: ");
        fflush(stdin);
        gets(pessoas[contadorA].nome);

        printf("\tDigite o endereco: ");
        fflush(stdin);
        gets(pessoas[contadorA].endereco);

        printf("\tDigite o telefone(ex: (xx) xxxxx-xxxx): ");
        fflush(stdin);
        gets(pessoas[contadorA].telefone);
    }

    for (contadorA = 0; contadorA < PESSOAS; contadorA++){
        printf("\n\nPESSOA %d\n", contadorA+1);
        printf("\tNome: %s\n", pessoas[contadorA].nome);
        printf("\tEndereco: %s\n", pessoas[contadorA].endereco);
        printf("\tTelefone: %s", pessoas[contadorA].telefone);
    }

    return 1;
}
