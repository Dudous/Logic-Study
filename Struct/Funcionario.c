#include <stdio.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[50];
    int idade;
    char sexo;
    char cpf[12];
    Data nasc;
    int setor;
    char cargo[30];
    float salario;
} Funcionario;


int main()
{
    FILE *arquivo;
    Funcionario funcionario;
    Data data;

    printf("Digite o Nome do funcionario: \n");
    scanf("%49[^\n]", funcionario.nome);

    printf("Digite a Idade do funcionario: \n");
    scanf("%d", &funcionario.idade);

    printf("Digite o Sexo do funcionario:(F/M) \n");
    scanf(" %c", &funcionario.sexo);

    printf("Digite o Cpf do funcionario: \n");
    scanf("%s", &funcionario.cpf);

    printf("Digite a Data de nascimento do funcionario:(dd mm aaaa) \n");
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
    funcionario.nasc = data;

    printf("Digite o Setor do funcionario: \n");
    scanf(" %d", &funcionario.setor);

    printf("Digite o Cargo do funcionario: \n");
    scanf(" %30[^\n]", funcionario.cargo);

    printf("Digite o Salario do funcionario: \n");
    scanf("%f", &funcionario.salario);

    arquivo = fopen("Funcionario.txt", "w");

    fprintf(arquivo, "Nome: %s\n", funcionario.nome);
    fprintf(arquivo, "Idade: %d\n", funcionario.idade);
    fprintf(arquivo, "Sexo: %c\n", funcionario.sexo);
    fprintf(arquivo, "CPF: %s\n", funcionario.cpf);
    fprintf(arquivo, "Data de Nascimento: %d\n", funcionario.nasc);
    fprintf(arquivo, "Setor: %d\n", funcionario.setor);
    fprintf(arquivo, "Cargo: %s\n", funcionario.cargo);
    fprintf(arquivo, "Salario: %.2f\n", funcionario.salario);

    fclose(arquivo);

    arquivo = fopen("Funcionario.txt", "r");

    char ch;
    
    do
    {
        ch = getc(arquivo);
        printf("%c", ch);
        
    } while (ch != EOF);
    
    fclose(arquivo);
}