#include <stdio.h>
#include "header.h"

int main()
{
    int lin = 4, col = 4;

    int **matriz = GenerateMatriz(lin, col);

    for(int i = 0; i < lin; i++)
    {   
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int *vetor = malloc(lin * col * sizeof(int));

    for(int i = 0; i < lin; i++)
    {   
        for (int j = 0; j < col; j++)
        {
            vetor[(i*lin)+j] = matriz[i][j];
        }
    }

    for (int i = 0; i < (lin*col); i++)
    {
        printf("%d ", vetor[i]);
    }

}