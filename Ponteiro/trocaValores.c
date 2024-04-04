#include <stdio.h>

void Troca(int * a, int * b){
    int piramide;
    
    piramide = *a;
    *a = *b;
    *b = piramide;
}


int main()
{
    int x,y;

    printf("Digite o valor 1: ");
    scanf("%d", &x);
    printf("Digite o valor 2: ");
    scanf("%d", &y);

    Troca(&x,&y);

    printf("Valor 1: %d\nValor 2: %d", x, y);
}