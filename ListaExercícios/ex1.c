#include <stdio.h>

int main()
{
    int vetor[] = {10, 20, 30, 40, 50};
    int tam = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i < tam; i++)
    {
        printf("%d\n",vetor[i]);
    }
}