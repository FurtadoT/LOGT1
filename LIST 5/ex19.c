#include <stdio.h>
#include <stdlib.h

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 19.
    Escreva  um  programa  completo  que  permita  a  qualquer  aluno  introduzir,  pelo  teclado,  uma sequ�ncia arbitr�ria de notas (v�lidas no intervalo de 0 a 10) e que mostre na tela, como resultado, a correspondente m�dia aritm�tica. O n�mero de notas com que o aluno  pretenda  efetuar  o c�lculo n�o ser� fornecido ao programa, o qual terminar� quando for introduzido um valor que n�o seja v�lido como nota de aprova��o.
*/

int main(void){
    double nota, soma = 0;
    int qtd = 0;

    while (1){
        if (qtd > 0)
            printf("Digite a proxima nota: ");
        else
            printf("Digite a primeira nota: ");
        scanf("%lf", &nota);

        if ((nota >=0) && (nota <=10)){
            soma += nota;
            qtd++;
        } else
            break;
    }

    if (qtd > 0)
        printf("\nA sua media e %.2lf em %d notas.\n", (soma / qtd), qtd);
    else
        printf("\nNao foi inserida nenhuma nota.\n");

    return 1;
}
