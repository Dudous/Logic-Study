#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int notas[3][3]; 
    
    for(int i = 0;i < 3;i++)
    {
        for (int j= 0; j < 3; j++)
        {
            notas[i][j] = rand() % 10;
        }
    }

    char alunos[3][50];

    FILE* arquivo;

    arquivo = fopen("alunos.txt", "w");

    for(int i = 0; i < 3; i++)
    {
        printf("\nDigite o nome do Aluno:\n>>>  ");
        scanf(" %49[^\n]", alunos[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("\n%s - ", alunos[i]);
        fprintf(arquivo, "\n%s - ", alunos[i]);
        for(int j= 0;j < 3;j++)
        {
            printf("%d, ", notas[i][j]);
            fprintf(arquivo,"%d, ", notas[i][j]);
        }
    }

    fclose(arquivo);
}