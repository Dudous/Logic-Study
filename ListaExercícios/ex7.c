#include <stdio.h>

int main()
{
    char vetor[][10] = {"Alice", "Bob", "Carol", "David"};

    int tam = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i< tam; i++)
    {
        printf("%s\n", vetor[i]);
    }
}