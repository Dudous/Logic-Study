#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int notas[5][3], media;
    char alunos[5][50];

    srand(time(NULL));

    for(int i = 0; i <5; i++)
    {
        printf("\nDigite o nome do Aluno %d: ", i+1);
        scanf(" %49[^\n]", alunos[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            notas[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s: ", alunos[i]);
        media = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", notas[i][j]);
            media += notas[i][j];
        }
        printf("Media: %d\n", media/3);
    }
    
    





}