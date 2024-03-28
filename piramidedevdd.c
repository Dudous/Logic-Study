#include <stdio.h>

int main()
{
    int lin, op, height, width;
    int piramide[5][5] = {0};
    


    printf("Digite o numero de linhas do Triangulo: ");
    scanf("%d", &lin);

    for(int i = 0; i <= lin; i++)
    {
        for(int j = 0; j <= i; j++){
            // printf(" %d  ", j);
            piramide[i][j] = 1;
        }
        printf("\n");
    }

    for(int i = 0; i <= lin; i++)
    {
        for(int j = 0; j <= i; j++){
            // printf(" %d  ", j);
            printf("%d",piramide[i][j]);
        }
        printf("\n");
    }
}