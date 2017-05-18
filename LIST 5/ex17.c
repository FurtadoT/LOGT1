#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 17.
    Fa�a um programa que apresente um menu de op��es para o c�culo das seguintes opera��es entre dois n�meros:
        adi��o (op��o 1)
        subtra��o (op��o 2)
        multiplica��o (op��o 3)
        divis�o (op��o 4)
        sa�da (op��o 5)
    O programa deve possibilitar ao usu�rio a escolha da opera��o desejada, a exibi��o do resultado e a volta ao menu de op��es. O programa s� termina quando for escolhida a op��o de sa�da (op��o 5).
*/

int main(void){
    int opcao;
    double n1, n2, resultado;

    do{
        printf("Escolha a opcao\n");
        printf("\t1- Soma de dois numeros;\n");
        printf("\t2- Diferenca entre dois numeros (maior pelo menor);\n");
        printf("\t3- Produto entre dois numeros;\n");
        printf("\t4- Divisao entre dois numeros (o denominador nao pode ser zero);\n");
        printf("\t5- Sair;\n");
        printf("\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &n1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                resultado = n1 + n2;

                printf("\nO resultado da conta e: %.2lf\n\n", resultado);
                break;
            case 2:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &n1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);
                // colocar em ordem cresven
                if (n2 > n1){
                    n2 += n1;
                    n1 = n2 - n1;
                    n2 -= n1;
                }

                resultado = n1 - n2;

                printf("\nO resultado da conta e: %.2lf\n\n", resultado);
                break;
            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &n1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                resultado = n1 * n2;

                printf("\nO resultado da conta e: %.2lf\n\n", resultado);
                break;
            case 4:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &n1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                if (n2 > 0)
                    resultado = n1 / n2;
                else
                    printf("\nNumeros invalidos! Divisao por 0.\n");

                printf("\nO resultado da conta e: %.2lf\n\n", resultado);
                break;
            case 5:
                printf("\n\t\tSaindo do menu...\n\n");
                break;
            default:
                printf("\n\t\tOPCAO INVALIDA!\n\n");
                break;
        }
    } while (opcao != 5);

    return 1;
}
