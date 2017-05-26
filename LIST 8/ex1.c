#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO     170141-X

    EXERCÍCIO 1
        Faça um programa que armazene em um registro de dados (estrutura composta)
    os dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F),
    CPF, Cargo que ocupa (string de até 30 caracteres) e Salário. Os dados devem
    ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.
*/

typedef struct str_Funcionario funcionario_t;
struct str_Funcionario{
    char nome[50];
    char cargo[30];
    char cpf[14];
    int idade;
    char sexo;
    double salario;
};

int main(void){
    funcionario_t funcionario;

    printf("Digite o nome do funcionario: ");
    gets(funcionario.nome);
    printf("Digite o cargo do funcionario: ");
    fflush(stdin);
    gets(funcionario.cargo);
    printf("Digite o cpf do funcionario: ");
    fflush(stdin);
    gets(funcionario.cpf);
    printf("Digite a idade do funcionario: ");
    fflush(stdin);
    scanf("%d", &funcionario.idade);
    printf("Digite o sexo do funcionario(M/F): ");
    fflush(stdin);
    scanf("%c", &funcionario.sexo);
    printf("Digite o salario do funcionario: ");
    fflush(stdin);
    scanf("%lf", &funcionario.salario);

    if (funcionario.sexo == 'M')
        printf("\n\nO funcionario %s, cpf %s, de %d anos, ocupa o cargo de %s e recebe %.2lf reais.", funcionario.nome, funcionario.cpf, funcionario.idade, funcionario.cargo, funcionario.salario);
    else
        printf("\n\nA funcionaria %s, cpf %s, de %d anos, ocupa o cargo de %s e recebe %.2lf reais.", funcionario.nome, funcionario.cpf, funcionario.idade, funcionario.cargo, funcionario.salario);


    return 1;
}
