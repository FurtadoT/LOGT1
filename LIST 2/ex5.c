#include <stdlib.h>
#include <stdio.h>


/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 5.
    Crie um algoritmo em C que leia a idade de uma pessoa e informe a sua classe eleitoral: Não eleitor (abaixo de 16 anos); Eleitor obrigatório (entre a faixa de 18 e menor de 65 anos); Eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).
*/

int main(void){
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16)
        printf("Nao eleitor");
    else if ((idade < 18) || (idade > 65))
        printf("Eleitor facultativo");
    else
        printf("Eleitor obrigatorio");
}
