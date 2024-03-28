#include <stdio.h>

int main()
{
    int num;

    printf("Insira um numero inteiro:\n>>> ");
    scanf("%d", &num);

    printf("%d",Soma(num));
}

int Soma(num)
{
    if(num == 0)
        return 0;

    return num + Soma(num-1);
}