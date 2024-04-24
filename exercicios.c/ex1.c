#include <stdio.h>
#include "header.h"

int main()
{
    int *vetor = GenerateArray(10);

    for (int i = 0; i < 10; i++)
    {
        printf(" %d", vetor[i]);   
    }
}