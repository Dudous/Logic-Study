#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct 
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    char title[20];
    char desc[100];
    Date date;
    Date validity;
    char status[20];
} Task;

int main()
{
    Task tarefa;
    Task *tarefas = malloc(5 * sizeof(Task));
    int size = 0;
    int user = 1;
    int index;
    time_t rawtime;
    struct tm *timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    while (user != 0)
    {    
    printf("O que deseja fazer: \n\n1 - Criar Tarefa\n2 - Visualizar Tarefas\n3 - Atualizar Tarefa\n4 - Excluir Tarefa\n");
    scanf("%d", &user);
        switch (user)
        {
        case 1:
            printf("Digite o titulo da tarefa: \n");
            scanf(" %19[^\n]", tarefa.title);   
            printf("Digite a descricao da tarefa: \n");
            scanf(" %99[^\n]", tarefa.desc);

            Date atual;
            atual.day = timeinfo->tm_mday;
            atual.month = timeinfo->tm_mon + 1;
            atual.year = timeinfo->tm_year + 1900;

            tarefa.date = atual;

            Date venc;

            venc.day = (atual.day + 15) % 30;
            venc.month = atual.month;
            
            if((atual.day + 10) > 30)
                venc.month +=1;

            venc.year = atual.year;

            tarefa.validity = venc;

            tarefas[size++] = tarefa;

            break;

        case 2:
            printf("\n\n===Tarefas===\n\n");
            
            for (int i = 0; i < size; i++)
            {
                printf("Titulo: %s\n", tarefas[i].title);
                printf("Descricao: %s\n", tarefas[i].desc);
                printf("Status: %s", tarefas[i].status);
                printf("Data Criacao: %d/%d/%d\n", tarefas[i].date.day, tarefas[i].date.month, tarefas[i].date.year);
                printf("Data Vencimento: %d/%d/%d\n\n", tarefas[i].validity.day, tarefas[i].validity.month, tarefas[i].validity.year);
            }
            
            break;
        case 3:
            printf("Digite o Index da tarefa a ser Atualizada:");
            // AttTask();
            break;
        case 4:
            break;    
        default:
            break;
        }

    }
}