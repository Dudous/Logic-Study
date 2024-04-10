#include <stdio.h>

int *Soma(int num)
{
    num += 5;
}

int main()
{
    int a = 10;

    printf("%d", *Soma(a));
}