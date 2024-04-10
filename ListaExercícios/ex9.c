#include <stdio.h>

int contarElementos(int vetor[], int tam)
{
    int cont = 0;
    for(int i = 0; i< tam ;i++)
    {
        if(vetor[i]%2 == 0)
            cont++;
    }
    return cont;
}
int main()
{
    int vetor[] = {10, 5, 2, 7, 80, 45, 31, 12, 9}, tam = sizeof(vetor)/sizeof(vetor[0]);

    printf("Número de itens pares: %d", contarElementos(vetor, tam));
}