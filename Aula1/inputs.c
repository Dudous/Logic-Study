#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[50], nasc[11], cpf[15];

    printf("Digite seu nome e Sobrenome\n");
    scanf("%s", nome);

    printf("Digite sua data de Nascimento\n");
    scanf("%s", nasc);

    printf("Digite seu CPF\n");
    scanf("%s", cpf);

    printf("O aluno %s, nascido no dia %s, portador do CPF %s, Concluiu o Curso de Análise e Desenvolvimento de Sistemas", nome, nasc, cpf);
}