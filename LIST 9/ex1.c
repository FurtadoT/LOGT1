#include <stdio.h>
#include <stdlib.h>

/*
        TOBIAS FURTADO      170141X

        EXERCÍCIO 1.
        Uma	 determinada	 empresa	 decidiu	 montar	 uma	 agenda	 com	 seus	 clientes	 contendo:
código	(int),	nome	,	cpf	,	telefone,	endereço	e	renda.	A	empresa	pode	cadastrar	no	máximo
100	clientes.	Desenvolva	um	programa	que	implemente	essa	agenda	com	o	seguinte	menu
de	opções:
            1	– Cadastrar	Cliente
            2	– Mostrar	lista	de	Clientes
            3	– Pesquisar	por	código
            4	– Pesquisar	por	CPF
            5	– Pesquisar	por	telefone
            6	– Alterar	Registro(inserir	o	código,	que	não	deve	ser	alterado)
            7	- Sair
*/
#define MAXCLIENTES 100
#define CADASTRO 1
#define MOSTRAR 2
#define PESQCOD 3
#define PESQCPF 4
#define PESQTEL 5
#define ALTERAR 6
#define SAIR 7

typedef struct str_clientes clientes_t;
struct str_clientes{
    int cod;
    char nome[50];
    char cpf[15];
    char telefone[20];
    char endereco[50];
    double renda;
};

//MENU
int menu();
//CADASTRO DE CLIENTE
clientes_t cad_cliente();
//LISTAR OS CLIENTES JÁ CADASTRADOS
void mostrar_clientes(clientes_t* clientes, int qtdClientes);
//APENAS PRINT CLIENTE
void print_cliente(clientes_t cliente);
//PESQUISAR CLIENTE POR COD
int pesq_cod_cliente(clientes_t* clientes, int qtdClientes);
//PESQUISAR CLIENTE POR CPF
int pesq_cpf_cliente(clientes_t* clientes, int qtdClientes);
//PESQUISAR CLIENTE POR TELEFONE
int pesq_tel_cliente(clientes_t* clientes, int qtdClientes);
//ALTERAR CLIENTE (UTILIZANDO COD)
void alterar_cliente(clientes_t* clientes, int pos);


int main(void){
    clientes_t clientes[MAXCLIENTES];
    int opcao = 0,  qtdClientes = 0, posAux;

    while (opcao != 7){
        opcao = menu();
        switch (opcao){
            case CADASTRO:
                clientes[qtdClientes] = cad_cliente();
                qtdClientes++;
                break;
            case MOSTRAR:
                mostrar_clientes(clientes, qtdClientes);
                break;
            case PESQCOD:
                posAux = pesq_cod_cliente(clientes, qtdClientes);
                if (posAux != -1){
                    printf("\n\nCLIENTE ENCONTRADO!\n\n");
                    print_cliente(clientes[posAux]);
                } else
                    printf("\n\nCLIENTE NAO ENCONTRADO!!\n");
                break;
            case PESQCPF:
                posAux = pesq_cpf_cliente(clientes, qtdClientes);
                if (posAux != -1){
                    printf("\n\nCLIENTE ENCONTRADO!\n\n");
                    print_cliente(clientes[posAux]);
                } else
                    printf("\n\nCLIENTE NAO ENCONTRADO!!\n");
                break;
            case PESQTEL:
                posAux = pesq_tel_cliente(clientes, qtdClientes);
                if (posAux != -1){
                    printf("\n\nCLIENTE ENCONTRADO!\n\n");
                    print_cliente(clientes[posAux]);
                } else
                    printf("\n\nCLIENTE NAO ENCONTRADO!!\n");
                break;
            case ALTERAR:
                printf("\n\n--------------------");
                printf("ALTERACAO DE CLIENTE:");
                printf("--------------------\n\n");
                alterar_cliente(clientes, pesq_cod_cliente(clientes, qtdClientes));
                break;
            case SAIR:
                break;
            default:
                printf("\n\nOPCAO INVALIDA!\n");
                break;
        };
    }

    return 1;
}

int menu(){
    int opcao;

    printf("\n\n--------------------");
    printf("MENU DE CLIENTES:");
    printf("--------------------\n\n");
    printf("\t1. Cadastrar cliente\n");
    printf("\t2. Mostrar lista de clientes\n");
    printf("\t3. Pesquisar por codigo\n");
    printf("\t4. Pesquisar por CPF\n");
    printf("\t5. Pesquisar por telefone\n");
    printf("\t6. Alterar registro\n");
    printf("\t7. Sair\n");
    printf("\nDigite a opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

clientes_t cad_cliente(){
    clientes_t cliente;

    printf("\n\n--------------------");
    printf("CADASTRO DE CLIENTE:");
    printf("--------------------\n\n");
    printf("\nDigite o cod do cliente novo: ");
    scanf("%d", &cliente.cod);
    printf("Digite o nome: ");
    fflush(stdin);
    gets(cliente.nome);
    printf("Digite o cpf: ");
    fflush(stdin);
    gets(cliente.cpf);
    printf("Digite o telefone: ");
    fflush(stdin);
    gets(cliente.telefone);
    printf("Digite o endereco: ");
    fflush(stdin);
    gets(cliente.endereco);
    printf("Digite a renda: ");
    fflush(stdin);
    scanf("%lf", &cliente.renda);

    printf("\nCLIENTE COD %d CADASTRADO COM SUCESSO\n\n", cliente.cod);

    return cliente;
}

void mostrar_clientes(clientes_t* clientes, int qtdClientes){
    int contadorA;

    printf("\n\n--------------------");
    printf("LISTAGEM DE CLIENTES:");
    printf("--------------------\n\n");
    for (contadorA = 0; contadorA < qtdClientes; contadorA++){
        print_cliente(clientes[contadorA]);
        printf("\n\n");
    }
}

void print_cliente(clientes_t cliente){
    printf("\tCLIENTE COD %d:\n", cliente.cod);
    printf("\t\tNome: %s\n", cliente.nome);
    printf("\t\tCPF: %s\n", cliente.cpf);
    printf("\t\tTelefone: %s\n", cliente.telefone);
    printf("\t\tEndereco: %s\n", cliente.endereco);
    printf("\t\tRenda: %.2lf", cliente.renda);
}

int pesq_cod_cliente(clientes_t* clientes, int qtdClientes){
    int contadorA;
    int codAux;

    printf("\n\n--------------------");
    printf("BUSCA DE CLIENTE POR CODIGO:");
    printf("--------------------\n\n");
    printf("Digite o codigo para pesquisa: ");
    scanf("%d", &codAux);
    for (contadorA = 0; contadorA < qtdClientes; contadorA++){
        if (clientes[contadorA].cod == codAux)
            return contadorA;
    }

    printf("\n");
    return -1;
}

int pesq_cpf_cliente(clientes_t* clientes, int qtdClientes){
    int contadorA;
    char cpfAux[15];

    printf("\n\n--------------------");
    printf("BUSCA DE CLIENTE POR CPF:");
    printf("--------------------\n\n");
    printf("Digite o CPF para pesquisa: ");
    fflush(stdin);
    gets(cpfAux);
    for (contadorA = 0; contadorA < qtdClientes; contadorA++){
        if (strcmp(clientes[contadorA].cpf, cpfAux) == 0)
            return contadorA;
    }

    printf("\n");
    return -1;
}

int pesq_tel_cliente(clientes_t* clientes, int qtdClientes){
    int contadorA;
    char telefoneAux[20];

    printf("\n\n--------------------");
    printf("BUSCA DE CLIENTE POR TELEFONE:");
    printf("--------------------\n\n");
    printf("Digite o telefone para pesquisa: ");
    fflush(stdin);
    gets(telefoneAux);
    for (contadorA = 0; contadorA < qtdClientes; contadorA++){
        if (strcmp(clientes[contadorA].telefone, telefoneAux) == 0)
            return contadorA;
    }

    printf("\n");
    return -1;
}

void alterar_cliente(clientes_t* clientes, int pos){
    print_cliente(clientes[pos]);

    printf("\n\nDigite o novo nome: ");
    fflush(stdin);
    gets(clientes[pos].nome);
    printf("Digite o novo cpf: ");
    fflush(stdin);
    gets(clientes[pos].cpf);
    printf("Digite o novo telefone: ");
    fflush(stdin);
    gets(clientes[pos].telefone);
    printf("Digite o novo endereco: ");
    fflush(stdin);
    gets(clientes[pos].endereco);
    printf("Digite a nova renda: ");
    fflush(stdin);
    scanf("%lf", &clientes[pos].renda);

    printf("\nCLIENTE COD %d ALTERADO COM SUCESSO\n\n", clientes[pos].cod);
}
