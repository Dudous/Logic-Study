#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define LIN 10
#define COL 10

int main()
{
    int cebola[LIN][COL];
    srand(time(NULL));

    int linha = rand()%LIN;
    int coluna =  rand()%COL;
    int maior = LIN * COL;
    // printf("%d %d \n", linha, coluna);
       
    for(int i= 0; i< LIN;i++)
    {
        for(int j= 0; j< COL;j++)
        {
            cebola[i][j] = maior - 5* ((fabs(i-linha))  +  ((fabs(j-coluna))));
        }
    }
    for(int i= 0; i< LIN;i++)
    {
        for(int j= 0; j < COL;j++)
        {
            printf("\t%d",cebola[i][j]);
        }
        printf("\n\n");
    }
    int cebolinha = cebola[0][0];
    int c = 0, l= 0;
    while (cebolinha < cebola[0][ c + 1 ])
    {
        cebolinha = cebola[0][c];
        c++;
    }
    while (cebolinha < cebola[l+1][c])
    {
        cebolinha = cebola[l][c];
        l++;
    }
    printf("Melhor Posicao: [%d][%d]\n\n\n",l,c);
}