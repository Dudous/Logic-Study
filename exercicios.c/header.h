#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int GenerateArray(int size)
{
    int *array = malloc(size * sizeof(int));

    for(int i = 0; i < size; i++)
    {
        array[i] = i+1;
    }

    return array;
}

int GenerateMatriz(int lin, int col)
{
    int **matriz = malloc(lin * sizeof(int));

    for (int i = 0; i < lin; i++)
    {
        matriz[i] = malloc(col* sizeof(int));
    }

    for(int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matriz[i][j] = i+j;
        }
    }

    return matriz;
}


void Double(int *value)
{
    *value *= 2;
}


char Compare(char **words1, char **words2, int num)
{
    // int tam1 = (sizeof(words1)/sizeof(words1[0])), tam2 = (sizeof(words1)/sizeof(words2[0]));

    char **result = malloc(num * sizeof(char)), engual[6] = "IGUAL", diferente[10] = "DIFERENTE";

    for (int i = 0; i < num; i++)
    {
        // printf(" %s\n", words1[i]);
        // printf(" %s\n", words2[i]);

        if (!(strcmp(words1[i], words2[i])))
        {
            result[i] = malloc(sizeof(engual));
            result[i] = engual;
            // printf(" %s\n", result[i]);
        }
        else{
            result[i] = malloc(sizeof(diferente));
            result[i] = diferente;
            // printf(" %s\n", result[i]);
        }
    }

    return result;
}

#endif