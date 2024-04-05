#include <stdio.h>

int main()
{
    int vetor[5] = {12, 34, 65, 1, 98}, max = vetor[0];

    for(int i = 1; i < 6; i++)
    {
        max = (vetor[i]> max)? vetor[i]: max;
    }

    printf("Maior Valor: %d", max);
}