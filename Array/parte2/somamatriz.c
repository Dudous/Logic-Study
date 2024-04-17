#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int matriz[2][3][2], matrizresultado[3][2];

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
            matrizresultado[i][j] = matriz[0][i][j] + matriz[1][i][j];
            printf("%d ",matrizresultado[i][j]);
        }
        printf("\n");
    }    
}