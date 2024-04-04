#include <stdio.h>

int Maior(int *a, int *b)
{
    printf("\nEndereco do 'a': %x\n", a);
    printf("Endereco do 'b': %x\n", b);
    printf("\nMaior endereco: %d", (a>b)? *a: *b);
}

int main()
{
    int x, y;

    printf("Digite o Primeiro valor:");
    scanf("%d", &x);
    printf("Digite o Segundo valor:");
    scanf("%d", &y);

    Maior(&x, &y);
}