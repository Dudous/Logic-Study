#include <stdio.h>

void inverterVetor(int vetor[], int tam)
{
    int aux = 0;
    for(int i = 0; i < tam/2; i++)
    {
        aux = vetor[i];
        vetor[i] = vetor[tam-i];
        vetor[tam - i]= aux;
    }
}

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, tam = sizeof(vetor)/sizeof(vetor[0]);

    inverterVetor(vetor, tam-1);

    for(int i = 0; i < tam; i++)
    {
        printf("%d\n",vetor[i]);
    }

}