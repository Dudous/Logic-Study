#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char name[30];
    char lastName[30];
    int day;
    int month;
    int year;
} Owner;


typedef struct 
{
    char brand[20];
    int year;
    char color[10];
    char plate[8];
    char model[20];
    Owner owner;
} Car;


int GetIdade(int dia, int mes, int ano, int diaProp, int mesProp, int anoProp)
{
    int aux =0;
    mes += 1;
    ano += 1900;

    if(anoProp > ano)
        return NULL;

    if (mesProp > mes)
        aux = 1;
    else if (mesProp == mes)
    {
        if(diaProp >= dia)
            aux = 1;
    }
    
    return ano - anoProp - aux;
}

int main()
{
    int user;
    FILE *arquivo;
    Car veiculo;
    Owner proprietario;
    arquivo = fopen("Parktop.txt", "w");
    fprintf(arquivo, "====PARKTOP====\n\n");

    time_t rawtime;
    struct tm *timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    printf("Digite Quantos carros deseja adicionar\n");
    scanf("%d", &user);

    for (int i = 0; i < user; i++)
    {
        
        printf("Digite o Nome do proprietario:\n");
        scanf(" %29[^\n]", proprietario.name);

        printf("Digite o Sobrenome do proprietario:\n");
        scanf(" %29[^\n]", proprietario.lastName);

        printf("Digite a data de nascimento do proprietario: (dd mm aaaa)\n");
        scanf("%d %d %d", &proprietario.day, &proprietario.month, &proprietario.year);

        veiculo.owner = proprietario;

        printf("Digite a marca do veiculo:\n");
        scanf(" %19[^\n]", veiculo.brand);

        printf("Digite o ano do veiculo:\n");
        scanf("%d", &veiculo.year);

        printf("Digite a cor do veiculo:\n");
        scanf(" %9[^\n]", veiculo.color);

        printf("Digite a placa do veiculo:\n");
        scanf(" %9[^\n]", veiculo.plate);

        printf("Digite o modelo do veiculo:\n\n\n");
        scanf(" %20[^\n]", veiculo.model);


        fprintf(arquivo, "Veiculo\nModelo: %s\n", veiculo.model);
        fprintf(arquivo, "Marca: %s\n", veiculo.brand);
        fprintf(arquivo, "Ano: %d\n", veiculo.year);
        fprintf(arquivo, "Placa: %s\n", veiculo.plate);
        fprintf(arquivo, "Cor: %s\n\n", veiculo.color);

        fprintf(arquivo, "Proprietario\nNome: %s %s\n", veiculo.owner.name, veiculo.owner.lastName);
        fprintf(arquivo, "Idade: %d Anos\n\n\n", GetIdade(timeinfo->tm_mday, timeinfo->tm_mon, timeinfo->tm_year, veiculo.owner.day, veiculo.owner.month, veiculo.owner.year));

    }

    fprintf(arquivo, "\nData: %s",asctime (timeinfo));

    fclose(arquivo);

}
