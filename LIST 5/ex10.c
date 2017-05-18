#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 10.
    Fa�a um programa que mostre ao usu�rio um menu com 4 op��es de opera��es matem�ticas (as b�sicas, por exemplo). O usu�rio escolhe uma das op��es e o seu programa ent�o pede dois valores num�ricos e realiza a opera��o, mostrando o resultado e saindo.
*/

int main(void){
    int opcao;
    double n1, n2, resultado;

    printf("\t1.Soma\n");
    printf("\t2.Subtracao\n");
    printf("\t3.Multiplicacao\n");
    printf("\t4.Divisao\n");
    printf("\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if ((opcao == 1) || (opcao == 2) || (opcao == 3) || (opcao == 4)){
        printf("Digite o primeiro numero: ");
        scanf("%lf", &n1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &n2);

        switch (opcao){
            case 1:
                resultado = n1 + n2;
                break;
            case 2:
                resultado = n1 - n2;
                break;
            case 3:
                resultado = n1 * n2;
                break;
            case 4:
                resultado = n1 / n2;
                break;
            default:
                break;
        }

        printf("\nO resultado da conta e: %.2lf\n", resultado);
    } else {
        printf("\n\tOpcao invalida!\n");
    }

    return 1;
}
