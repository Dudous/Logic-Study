#include <stdio.h>

int encontrarIndice(int vetor[], int tam, int valor)
{
    for(int i = 0; i < tam; i++)
    {
        if(vetor[i] == valor){
            return i;
        }
    }
    return -1;
}


int main()
{
    int vetor[] = {10, 50, 20, 8, 6, 31, 7, 5, 91};
    int tam = sizeof(vetor)/ sizeof(vetor[0]), busca;

    printf("Digite o valor a ser buscado:\n");
    scanf("%d", &busca);

    printf("\n%d", encontrarIndice(vetor, tam, busca));
}