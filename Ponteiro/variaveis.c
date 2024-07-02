#include <stdio.h>

void Troca(void *a, float *b, char *c)
{
    void *troca;

    *troca = *a; 

    *a = *troca;
 }


int main()
{
    int real = 10;
    float inteiro = -90;
    char carac = 'c';

    printf("Valor do Real: %d\n", real);
    printf("Valor do Inteiro: %2f\n", inteiro);
    printf("Valor do Char: %c\n", carac);

    printf("\nDigite o novo valor do Inteiro:\n");
    scanf("%d", &real);
    printf("\nDigite o novo valor do Real:\n");
    scanf("%f", &inteiro);
    printf("\nDigite o novo valor do Char: \n");
    scanf(" %c", &carac);

    Troca(&real, &inteiro, &carac);

    printf("\nNovo valor do Real: %d", real);
    printf("\nNovo valor do Inteiro: %.2f", inteiro);
    printf("\nNovo valor do Char: %c", carac);
}