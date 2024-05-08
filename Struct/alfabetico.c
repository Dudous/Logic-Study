#include <stdio.h>

typedef struct 
{
    char nome[50];
    char endereco[100];
    char cpf[11];
} Pessoa;

int main()
{
    Pessoa pessoas[5];

    for(int i = 0; i < 2; i++)
    {
        printf("Digite o nome da pessoa: \n");
        scanf(" %49[^\n]", pessoas[i].nome);

        printf("Digite o endereco da pessoa: \n");
        scanf(" %99[^\n]", pessoas[i].endereco);
    
        printf("Digite o cpf da pessoa: \n");
        scanf(" %12[^\n]", pessoas[i].cpf);
    }

        for(int i = 0; i < 5; i++)
    {
        printf("%s\n", pessoas[i].nome);
        printf("%s\n", pessoas[i].endereco);
        printf("%s\n\n", pessoas[i].cpf);
    }
}