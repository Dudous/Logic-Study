#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char ddd;
    char telefone[11];
} Telefone;

typedef struct 
{
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[30];
    char cep[11];
    char cidade[50];
    char estado[50];
    char pais[50];
} Endereco;

typedef struct 
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct 
{
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Data nascimento;
    char obs[100];
} Pessoa;

void removePessoa(Pessoa *list, int index)
{
    // free(list[index]);

    for (int i = index; i < 5; i++)
    {
        list[i] = list[i+1];
    }
}


void listarPessoa(Pessoa *list)
{
    for(int i = 0; i < 2; i++)
    {
        printf("%d - %s", i+1, list[0].nome);
    }
}

void addPessoa(Pessoa *list, int *tam)
{
    Pessoa pessoa;

    printf("Digite o nome da Pessoa: ");
    scanf(" %49[^\n]", pessoa.nome);
    printf("Digite o email da Pessoa: ");
    scanf(" %49[^\n]", pessoa.email);
    printf("Digite o endereco da Pessoa: ");
    scanf(" %49[^\n]", pessoa.endereco.rua);
    printf("Digite o telefone da Pessoa: ");
    scanf(" %10[^\n]", pessoa.telefone.telefone);
    printf("Digite o nascimento da Pessoa: (dd mm aaaa)");
    scanf("%d %d %d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);
    printf("Observacoes: ");
    scanf(" %99[^\n]", pessoa.obs);

    *tam++;

    // *list = realloc(*list, *tam(sizeof(Pessoa)));
    
    // *list[i-1] = pessoa;
}


int main()
{
    int size = 0, user=1;
    Pessoa *listaPessoas = malloc(sizeof(Pessoa));

    while (user)
    {
        printf("------- Agenda -------\n\n1 - Adicionar Contato\n\n2 - Remover Contato\n\n3 - Listar Contatos\n\n0 - Sair\n");
        scanf("%d", &user);
        switch (user)
        {
        case 1:
            addPessoa(listaPessoas, &size);
            break;
        
        case 2:
            removePessoa(listaPessoas, 0);
            break;
        
        case 3:
            listarPessoa(listaPessoas);
            break;

        default:
            break;
        }
    }
}



