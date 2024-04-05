#include <stdio.h>

int main()
{
    int vetor[5] = {12, 34, 65, 1, 98}, soma = 0;

    for(int i = 0; i < 6; i++)
    {
        soma += vetor[i];
    }

    printf("Soma dos Valores: %d", soma);
}