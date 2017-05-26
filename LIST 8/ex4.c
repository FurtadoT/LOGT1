#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO     170141-X

    EXERCÍCIO 4
        Em um mercado, o registro de cada produto é descrito por: código, nome, preço e quantidade em estoque.
    Faça um programa que preencha um vetor com informações de 8 produtos.
    Em seguida, apresente o seguinte menu de opções ao usuário e implemente cada operação:

            Aumentar o preço de um produto em 10%
            Subtrair 1 unidade do estoque de um produto
            Imprimir produtos que tenham preço acima da média.
            Obs: Para as opções 1 e 2, o programa deverá solicitar ao usuário o código do produto para fazer a busca.
*/

#define AUMENTAR 1
#define SUBTRAIR 2
#define IMPRIMIR 3
#define SAIR 4

#define PRODUTOS 8

typedef struct str_Produtos produtos_t;
struct str_Produtos{
    int codProd;
    char nome[50];
    double preco;
    int qtdEstoque;
};

int main(void){
    produtos_t produtos[PRODUTOS];
    int contadorA, command = 0, codProd;
    double media = 0, auxPreco;

    for (contadorA = 0; contadorA < PRODUTOS; contadorA++){
        printf("\n\nPRODUTO %d:\n", contadorA+1);

        printf("\tCodigo: ");
        fflush(stdin);
        scanf("%d", &produtos[contadorA].codProd);

        printf("\tNome: ");
        fflush(stdin);
        gets(produtos[contadorA].nome);

        printf("\tPreco (Em reais): ");
        fflush(stdin);
        scanf("%lf", &produtos[contadorA].preco);
        media += produtos[contadorA].preco;

        printf("\tQuantidade em estoque: ");
        scanf("%d", &produtos[contadorA].qtdEstoque);
    }

    media /= PRODUTOS;

    do{
        switch (command){
            case 1:
                contadorA = -1;
                do{
                    if (contadorA != -1)
                        printf("\nPRODUTO NAO ENCONTRADO!\n");

                    printf("\nDigite o codigo do produto que deseja aumentar o preco: ");
                    scanf("%d", &codProd);

                    for (contadorA = 0; contadorA < PRODUTOS; contadorA++){
                        if (produtos[contadorA].codProd == codProd){
                            auxPreco = produtos[contadorA].preco;
                            media = (media * PRODUTOS) - auxPreco;
                            produtos[contadorA].preco *= 1.1;
                            media = (media + produtos[contadorA].preco) / PRODUTOS;
                            break;
                        }
                    }
                } while (contadorA == PRODUTOS);
                printf("\n\nVALOR DO PRODUTO '%s' ALTERADO DE %.2lf PARA %.2lf REAIS", produtos[contadorA].nome, auxPreco, produtos[contadorA].preco);

                break;
            case 2:
                contadorA = -1;
                do{
                    if (contadorA != -1)
                        printf("\nPRODUTO NAO ENCONTRADO!\n");

                    printf("\nDigite o codigo do produto que deseja diminuir o estoque: ");
                    scanf("%d", &codProd);

                    for (contadorA = 0; contadorA < PRODUTOS; contadorA++){
                        if (produtos[contadorA].codProd == codProd){
                            produtos[contadorA].qtdEstoque -= 1;
                            break;
                        }
                    }
                } while (contadorA == PRODUTOS);
                printf("\n\nESTOQUE DO PRODUTO '%s' ALTERADO DE %d PARA %d", produtos[contadorA].nome, produtos[contadorA].qtdEstoque+1, produtos[contadorA].qtdEstoque);

                break;
            case 3:
                printf("\n\n\n\tPRODUTOS COM VALORES ACIMA DA MEDIA (%.2lf reais)\n\n", media);
                for (contadorA = 0; contadorA < PRODUTOS; contadorA++){
                    if (produtos[contadorA].preco > media){
                        printf("Produto codigo %d '%s' -> %d em estoque no valor de %.2lf reais cada.\n", produtos[contadorA].codProd, produtos[contadorA].nome, produtos[contadorA].qtdEstoque, produtos[contadorA].preco);
                    }
                }

                break;
            default:
                break;
        }

        printf("\n\n\n\nALTERACAO DE PRODUTOS\n\n");
        printf("\t1. Aumentar o preco de um produto em 10%;\n");
        printf("\t2. Subtrair 1 unidade do estoque de um produto;\n");
        printf("\t3. Imprimir produtos que tenham preco acima da media;\n");
        printf("\t4. Sair.\n");

        printf("\nSelecione a opcao: ");
        scanf("%d", &command);
    } while (command != SAIR);

    return 1;
}
