#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIN 3
#define COL 2

int main()
{

    int ***matriz = malloc(2 * sizeof(int*));
    int **matrizresult = malloc(LIN * sizeof(int*));

    for (int i = 0; i < 2; i++)
    {
        matriz[i] = malloc(LIN * sizeof(int*));
    }

    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < LIN; j++)
        {
            matriz[i][j] = malloc(COL * sizeof(int*));
            matrizresult[j] = malloc(COL * sizeof(int*));
        }
    }
    
    srand(time(NULL));

    for (int i = 0; i < 2; i++)
    {
        printf("Matriz %d\n\n", i+1);
        for(int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                matriz[i][j][k] = rand()%10; 
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }

    }

    printf("Matriz Resultado\n\n");
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizresult[i][j] = matriz[0][i][j] + matriz[1][i][j];
            printf("%d ", matrizresult[i][j]);
        }
        printf("\n");
    }    

    free(matriz);
    free(matrizresult);
}