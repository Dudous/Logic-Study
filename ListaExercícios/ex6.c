#include <stdio.h>

void dobrarValores(int v[], int tam)
{
    for(int i = 0; i < tam; i++){
        v[i] *= 2;
    }
}

int main()
{
    int vetor[] = {10, 20, 30, 40, 50, 60, 70};

    int tam = sizeof(vetor)/sizeof(vetor[0]);

    dobrarValores(vetor, tam); //vetor já é um ponteiro

    for(int i = 0; i< tam; i++){
        printf("%d\n",vetor[i]);
    }
}