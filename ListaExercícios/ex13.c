#include <stdio.h>

int removerElemento(int vetor[], int  *tam, int indice)
{
    for(int i = indice; i < *tam; i++)
    {
        vetor[i] = vetor[i +1];
    }

    (*tam)--;
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5, 6};
    int *tam = sizeof(vetor)/ sizeof(vetor[0]),  indice = 0;

    removerElemento(vetor, &tam, 2);

    for(int i = 0; i < tam; i++)
    {
        printf("%d, ", vetor[i]);
    }
}