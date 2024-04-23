#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user = 0;

    printf("Digite a quantidade de números: ");
    scanf("%d", &user);

    int *vetor = malloc(user * sizeof(int));

    for (int i = 0; i < user; i++)
    {
        printf("Digite um Número: \n\n");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i <user; i++)
    {
        printf("%d, ", vetor[i]);
    }

    free(vetor);
}