#include <stdio.h>

int somarVetor(int vetor[], int tam)
{
    int soma = 0;

    for(int i = 0; i <= tam; i++)
    {
        soma += vetor[i];
    }

    return soma;

}

int main()
{
    int vetor[] = {10, 5, 2, 6, 1, 10, 15, 2, 1};
    int tam = sizeof(vetor)/sizeof(vetor[0]);

    printf("%d",somarVetor(vetor, tam));
}