#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 2.
	Elabore um algoritmo qu eleia do teclado o nome e idade de uma pessoa e informe se ela está apta ou não para tirar a CNH.
*/

int main(void){
    char nome[20];
    int idade;
    
    printf("Digite o nome: ");
    scanf("%s", nome);
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18)
       printf("%s esta apto(a) a tirar CNH", nome);
    else
       printf("%s não esta apto(a) a tirar CNH", nome);
    
    return 0;
}
