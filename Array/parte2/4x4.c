#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int matriz[5][5], soma = 0;
    srand(time(NULL));

    for(int i= 0; i< 4;i++)
    {
        for (int j = 0; j < 4;j++)
        {
            matriz[i][j] = rand()%10;
        }
    }

    for(int i= 0; i< 4;i++)
    {
        for (int j = 0; j < 4;j++)
        {
            printf("%d ", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }

    printf("Soma: %d", soma);
}