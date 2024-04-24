#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>
#define NUM 2

int main()
{
    char word[49];
    char **matriz1 = malloc(NUM * sizeof(char)), **matriz2 = malloc(NUM * sizeof(char));

    for (int i = 0; i < NUM; i++)
    {
        printf("\nDigite a frase %d\n", i+1);
        scanf(" %49[^\n]s", word);
        matriz1[i] = malloc(strlen(word) * sizeof(char));
        matriz1[i] = word;
        printf(" %s\n", matriz1[0]);
        printf(" %s\n", matriz1[1]);
    }

    for (int i = 0; i < NUM; i++)
    {
        printf("\nDigite a frase %d\n", i+1);
        scanf(" %49[^\n]s", word);
        matriz2[i] = malloc(strlen(word) * sizeof(char));
        matriz2[i] = word;
        printf(" %s\n", matriz2[0]);
        printf(" %s\n", matriz2[1]);
    }

    // char **resultado = Compare(matriz1, matriz2, NUM);
    
    for (int i = 0; i < NUM; i++)
    {
        // printf("\n\n %s", resultado[i]);

    }
    

}