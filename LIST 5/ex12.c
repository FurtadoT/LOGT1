#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 12.
    Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.
        Escolha a opção
        1- Soma de 2 números.
        2- Diferença entre 2 números (maior pelo menor).
        3- Produto entre 2 números.
        4- Divisão entre 2 números (o denominador não pode ser zero).
        Opção
*/

int main(void){
    int opcao;
    double n1, n2, resultado;

    printf("Escolha a opcao\n");
    printf("\t1- Soma de dois numeros;\n");
    printf("\t2- Diferenca entre dois numeros (maior pelo menor);\n");
    printf("\t3- Produto entre dois numeros;\n");
    printf("\t4- Divisao entre dois numeros (o denominador nao pode ser zero);\n");
    printf("\n");

    printf("Opcao: ");
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
                // colocar em ordem cresven
                if (n2 > n1){
                    n2 += n1;
                    n1 = n2 - n1;
                    n2 -= n1;
                }
                resultado = n1 - n2;
                break;
            case 3:
                resultado = n1 * n2;
                break;
            case 4:
                if (n2 > 0)
                    resultado = n1 / n2;
                break;
            default:
                break;
        }

        if (!(opcao == 4 && n2 == 0))
            printf("\nO resultado da conta e: %.2lf\n", resultado);
        else
            printf("\nNumeros invalidos! Divisao por 0.\n");
    } else {
        printf("\n\tOpcao invalida!\n");
    }

    return 1;
}
