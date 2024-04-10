#include <stdio.h>

void Troca(int *end, int *valor)
{
    *end = *valor;
}

int main()
{
    int pont = 10, end;

    printf("Digite o valor: \n");
    scanf("%d", &end);

    Troca(&pont, &end);

    printf("%d", pont);
}