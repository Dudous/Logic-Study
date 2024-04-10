#include <stdio.h>

int encontrarMaiorElemento(int vetor[], int tam)
{
    int maior = 0;

    for(int i = 0;i <= tam; i++)
    {
        if(vetor[i]> maior)
            maior = vetor[i];
    }
    return maior;
}

int main()
{
    int vetor[] = {10, 5, 6, 78, 2, 3, 4, 99 ,10, 0, 6};

    int tam = sizeof(vetor)/ sizeof(vetor[0]);

    printf("%d",encontrarMaiorElemento(vetor, tam));
}