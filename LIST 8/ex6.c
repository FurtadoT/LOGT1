#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO     170141-X

    EXERCÍCIO 6
         Em uma mercearia, o registro de cada produto é descrito por: código, nome,
    preço e quantidade em estoque. Faça um programa que preencha um vetor com informações de 5 produtos.
    Em seguida, o programa deve apresentar os produtos um a um para o cliente, que deve informar
    a quantidade desejada de cada produto. Ao final da operação, o programa deve apresentar o valor
    total da compra. O estoque deve ser atualizado a cada compra. Ao final do dia, o programa deve informar:

            Estoque final de cada produto
            Arrecadação total no dia.
*/

#define PRODUTOS 5

typedef struct str_Produtos produtos_t;
struct str_Produtos{
    int codProd;
    char nome[50];
    double preco;
    int qtdEstoque;
};

int main(void){
    produtos_t produtos[PRODUTOS];
    int contadorA, qtdCompra;
    double valorCompra = 0, arrecadacao = 0;
    char opcao;

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

        printf("\tQuantidade em estoque: ");
        scanf("%d", &produtos[contadorA].qtdEstoque);
    }

    for (contadorA = 0; contadorA < PRODUTOS; contadorA++){
        printf("\nDigite a quantidade desejada do produto '%s': ", produtos[contadorA].nome);
        fflush(stdin);
        scanf("%d", &qtdCompra);
        if (produtos[contadorA].qtdEstoque >= qtdCompra){
            produtos[contadorA].qtdEstoque -= qtdCompra;
            valorCompra += (produtos[contadorA].preco * qtdCompra);
        }else{
            printf("\nNão ha a quantidade desejada do produto em estoque. (Disponivel: %d)\n", produtos[contadorA].qtdEstoque);
            contadorA--;
        }

        if (contadorA+1 == PRODUTOS){
            printf("\n\nVALOR FINAL DA COMPRA: %.2lf\n", valorCompra);
            arrecadacao += valorCompra;
            valorCompra = 0;
            printf("Deseja realizar outra compra(S/N)? ");
            fflush(stdin);
            scanf("%c", &opcao);

            if (opcao == 'S')
                contadorA = -1;
        }
    }

    printf("\n\nFINAL DO DIA\n");
    for (contadorA = 0; contadorA < PRODUTOS; contadorA++){
        printf("\n\tProduto '%s' -> Estoque: %d", produtos[contadorA].nome, produtos[contadorA].qtdEstoque);
    }
    printf("\n\nVALOR ARRECADADO NO DIA: %.2lf", arrecadacao);



    return 1;
}
