#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO        PRONTUÁRIO: 170141-X

    ATIVIDADE 5:
        Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.
*/
int main(int argc, const char * argv[]){
    char tecla;

    printf("Digite uma tecla: ");
    scanf("%c", &tecla);

    printf("O antecessor da tecla e: %c", tecla-1);
}
