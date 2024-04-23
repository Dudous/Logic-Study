#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;

    printf("Digite o numero de linhas: \n");
    scanf("%d", &lin);
    printf("Digite o numero de colunas: \n");
    scanf("%d", &col);

    int **matriz = malloc(lin * sizeof(int*));

    for(int i = 0; i < lin; i++){
        matriz[i] = malloc(col * sizeof(int*));
    }

    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            matriz[i][j] = 1;
        }
    }

    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);
}