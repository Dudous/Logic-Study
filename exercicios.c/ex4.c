#include <stdio.h>
#include "header.h"

int main()
{
    int size;

    printf("Digite o tamnaho do array: \n");
    scanf("%d", &size);

    int *vetor = GenerateArray(size);

    for (int i = 0; i < size; i++)
    {
        printf(" %d", vetor[i]);   
    }
}